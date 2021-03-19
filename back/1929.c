// #1929
#include<stdio.h>
#include<math.h>

int main(void){
	int M, N;
	int length;
	scanf("%d %d", &M, &N);

	length = N-M+1;
	
	int array[length];
	//set array
	for(int i=0; i<length; i++){
		array[i] = M;
		M++;
	}


	//select data
	for(int i=2; i<sqrt(N); i++)
		for(int j=0; j<length; j++)
			if(array[j] != -1 && array[j]%i == 0 && array[j] != i)
				array[j] = -1;
	
	//1 is not prime number
	if(array[0] == 1) array[0] = -1;

	//print prime number
	for(int i=0; i<length; i++)
		if(array[i] != -1) printf("%d\n", array[i]);
	
	return 0;
}





















