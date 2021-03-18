// #2581


#include<stdio.h>

int main(void){
        int N, M;
        int count;
	int sum=0;
	int min=10000;
        int result = 0;

        scanf("%d", &M);
        getchar();
	scanf("%d", &N);

        for(int i=M; i<=N; i++){
                count = -1;

                // if mod = 0, count++
                for(int j=1; j<=i; j++)
                        if(i%j == 0)
                                count++;

                if(count == 1){
                        sum += i;
			if(min>i) min = i;
		}
        }
	
	if(sum == 0) printf("-1\n");
	else
       		printf("%d\n%d\n", sum, min);
        return 0;
}

