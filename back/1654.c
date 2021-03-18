// #1654

#include<stdio.h>

int main(void){
	int K, N;
	int length;
	
	int min = 1;
	int max = 1000000;
	int count = 0;
	scanf("%d %d", &K, &N);
	
	int array[N];
	for(int i=0; i<K; i++)
		scanf("%d", &array[i]);
	
	while(1){
		count = 0;
		length = (min+max)/2+1;
		printf("l : %d\n",length);
		for(int i=0; i<K; i++){
			count+=array[i]/length;
			printf("%d/%d = %d\n", array[i], length, array[i]/length);
		}
		
		//find
		if(count == N){
			printf("%d\n", count);
			break;
		}
		else if(count < N)
			max = length;
		else if(count > N)
			min = length;
		printf("%d\n", count);
	}
	return 0;	
}
