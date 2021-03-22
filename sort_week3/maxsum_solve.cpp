/*
 * 최대연속부분합알고리즘
 * 2021-03-19
 * written by SON
 *
 * note 
 *  : 이전 문제점
 *   M을 구하는 과정에서 단지 오른쪽 끝인 l의 값을 반으로 나누기만 했음.
 *   3~5의 범위의 경우 재귀시 5/2+1 ~ 5의 범위를 갖는데 3~5를 무한 루프되는 문제를 발견.
 *   M = l/2가 아닌,
 *   M = (l+r)/2 가 되어야 했음.
 *
 *   추가적인 문제점: 43 line sum = 0
 *   이 문장이 빠져서 rmax의 값이 left의 계산값이 들어있는 max에 덮혀지는 문제 확인
 *   추가해줌으로써 각각 독립적인 값을 가질 수 있도록 함
 *
 */

#include<iostream>

using std::cout;

int max(int a, int b);
int max3(int a, int b, int c);
int arr[] = { 500 , -99, 98, 100, 100, 100, 100, 101, -5, -10 };

/* r : end point
 * l : start point */
int max_sum(int l, int r) {
    if (l > r) return 0;
    if (l == r) return max(0, arr[l]);

    int M = (r+l) / 2;

    int lmax, rmax, sum;
    lmax = rmax = sum = 0;

    for (int i = M; i >= l; i--) {
        sum += arr[i];
        lmax = max(sum, lmax);
    }

    sum = 0;

    for (int i = M + 1; i <= r; i++) {
        sum += arr[i];
        rmax = max(sum, rmax);
    }
    return max3(rmax + lmax, max_sum(M + 1, r), max_sum(l, M));
}

int main(void) {
    int result = max_sum(0, 9);
    cout << result;
    return 0;
}


int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int max3(int a, int b, int c) {
    if (a > b) {
        if (a > c) return a;
        else return c;
    }
    else if (b > a) {
        if (b > c) return b;
        else return c;
    }
    else if (c > a) {
        if (c > b) return c;
        else return b;
    }
    return -1;
}

