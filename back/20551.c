#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int arr[200000];

int compare (int *first, int *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int search(int x, int N){
	for(int i=0; i<N; i++)
		if(x == arr[i])
			return i;
	return -1;
}

int main(void){
	int N, M;
	scanf("%d %d", &N, &M);
	
	for(int i=0; i<N; i++)
		scanf("%d", &arr[i]);

	qsort(arr, N, sizeof(int), compare);

	for(int i=0; i<M; i++){
		int x;
		int result;
		scanf("%d", &x);
		result = search(x, N);
		printf("%d\n", result);
	}
	
	return 0;
}
