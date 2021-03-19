/* 
 * 최대연속부분합알고리즘
 * 2021-03-19
 * written by SON
 */

#include<iostream>

using std::cout;

int max(int a, int b);
int max3(int a, int b, int c);
int arr[] = { 20, 30, 10, -40, 30, -70, 10, 20, 0, -70, -13, 130 };

/* r : end point
 * l : start point */
int max_sum(int l, int r){
	if(l>r) return 0;
	if(l==r) return max(0, arr[l]);
	
	int M = r/2;
	
	int lmax, rmax, sum;
	lmax = rmax = sum = 0;
	
	for(int i=M; i>=l; i--){
		sum += arr[i];
		lmax = max(sum, lmax);
	}
	
	for(int i=M+1; i<=r; i++){
		sum += arr[i];
		rmax = max(sum, rmax);
	}

	return max3(rmax+lmax, max_sum(M+1, r), max_sum(l, M));
}

int main(void){
	int result = max_sum(0, 11);
	cout<< result;
	return 0;
}


int max(int a, int b){
	if(a>b) return a;
	else return b;
}

int max3(int a, int b, int c){
	if(a>b){
		if(a>c) return a;
		else return c;
	}
	else if(b>a){
		if(b>c) return b;
		else return c;
	}
	else if(c>a){
		if(c>b) return c;
		else return b;
	}
	return -1;
}	

