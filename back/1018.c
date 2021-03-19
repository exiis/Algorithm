// #1018
#include<stdio.h>

int main(void){
	/* 8x8 array */
	char array1[8][8] = {
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
	};

	char array2[8][8] = {
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
	};

	int N, M;
	int X=0;
	int Y=0;

	char input_array[50][50];
	
	// get N and M
	scanf("%d %d", &M, &N);
	getchar();
	// get array
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			scanf("%c", &input_array[i][j]);
		}
		getchar();
	}

	int min = 2500;
	int count1 = 0;
	int count2 = 0;
	while(1){
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				if(input_array[i+Y][j+X] != array1[i][j])
					count1++;
				if(input_array[i+Y][j+X] != array2[i][j])
					count2++;
			}
		}
		if(min > count1) min = count1;
		if(min > count2) min = count2;
		count1 = 0;
		count2 = 0;
		X++;
		if(X+8 > N){
			X=0;
			Y++;
			if(Y+8 > M) break;
		}

	}
		

	printf("%d\n", min);
	return 0;
}


