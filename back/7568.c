// #7568 - 덩치
#include<stdio.h>


int main(void){
	int N;
	scanf("%d", &N);
	
	int weight[50];
	int height[50];
	int rank[50];

	// set info
	for(int i=0; i<N; i++){
		scanf("%d %d", &weight[i], &height[i]);
		rank[i] = 0;
	}
	
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			if(weight[i] < weight[j] && height[i] < height[j])
				rank[i]++;

	for(int i=0; i<N; i++)
		printf("%d ", rank[i]+1);

	
	return 0;
}
	
	




