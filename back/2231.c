// #2231

#include<stdio.h>
#include<math.h>

int main(void){
	int N;
	int temp;
	int result;
	result = -1;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		result = i;
		temp = i;
		for(int j=0; pow(10, j)<i; j++){
			result += temp%10;
			temp = temp/10;
		}
		if(result == N){
			printf("%d\n", i);
			return 0;
		}

	}
	printf("0\n");
	return 0;
}
