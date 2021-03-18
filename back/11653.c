// #11653

#include<stdio.h>
int main(void){
	int N;
	//1 is not prime number
	int prime_factor = 2;
	scanf("%d", &N);
	
	while(N != 1){
		if(N%prime_factor == 0){
			printf("%d\n", prime_factor);
			N = N/prime_factor;
		}
		else
			prime_factor++;
	}

	return 0;
}
