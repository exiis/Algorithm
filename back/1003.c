// #1003

#include<stdio.h>

int array[42] = {1, 0, 1};

int fib(int num){
	if(array[num] != -1) return array[num];
	else if(num == 0)
		return 0;
	else if(num == 1)
		return 1;
	else{
		array[num] = fib(num-1) + fib(num-2);
		return array[num];
	}
}
int main(void){
	/* init array */
	for(int i=3; i<42; i++)
		array[i] = -1;

	int N, T;

	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		fib(N+1);
		printf("%d %d\n", array[N], array[N+1]);
	}
	return 0;	
}
