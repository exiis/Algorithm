// #1978


#include<stdio.h>

int main(void){
	int N;
	int temp;
	int count;
	int result = 0;

	scanf("%d", &N);
	getchar();

	for(int i=0; i<N; i++){
		scanf("%d", &temp);
		count = -1;

		// if mod = 0, count++
		for(int j=1; j<=temp; j++)
			if(temp%j == 0)
				count++;

		if(count == 1) 
			result++;
	}

	printf("%d\n", result);
	return 0;
}
	
