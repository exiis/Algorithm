/* #10989 - solve
 * 2021-03-19
 * written by SON
 *
 * note
 * : 기수정렬으로 해결하지 못하는 메모리의 문제를
 *   수의 범위를 활용하여 수 자체를 카운트 하는 방식으로 구현
 */

#include<iostream>

using std::cout;
using std::cin;

int arr[10001] = { 0 };
int main(void){
	int N;
	int value;
	int max = 0;
	cin >> N;

	/* get data */
	for(int i=0; i<N; i++){
		scanf("%d", &value);
		arr[value]++;
	}

	for(int i=1; i<10001; i++){
		for(int j = arr[i]; j>0; j--)
			cout << i << "\n";
	}
	return 0;
}

