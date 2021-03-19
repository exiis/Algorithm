// #1929
#include<stdio.h>
#include<math.h>

int main(void){
        int N;
	int* mem[3];
	int t_arr[2] = {1, 2};
	int t_arr2[2] = {3, 4};

	mem[0] = t_arr;
	mem[1] = t_arr2;
	printf("%d %d %d %d", *mem[0], *mem[0]+1, *mem[1], *mem[1]+1);
	return 0;
}

