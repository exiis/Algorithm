// #2750

#include<stdio.h>

int main(void){
	int N;
	int arr[1000];

	scanf("%d", &N);

	for(int i=0; i<N; i++)
		scanf("%d", &arr[i]);
	
	
	
	for(int i=N-1; i>0; i--)
		for(int j=i; j<N; j++)
			if(arr[j-1]>arr[j]){
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}

	for(int i=0; i<N; i++)
		printf("%d\n", arr[i]);

	return 0;
}




