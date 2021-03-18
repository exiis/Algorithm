// #15649

#include<stdio.h>

int count = 0;
int array[8] = {0};
int result[8];
int N, M;

void dfs(int cnt){
	if(cnt == M){
		for(int i=0; i<M; i++)
			printf("%d ", result[i]);
		printf("\n");
	}
	else{
		for(int i=0; i<N; i++){
			if(array[i] != 1){
				array[i] = 1;
				result[cnt++] = i+1;
				dfs(cnt);
				array[i] = -1;
			}
		}
	}
}

int main(void){
	scanf("%d %d", &N, &M);

	dfs(0);
}
