#include<iostream>
#define MAX 9

int arr[] = {3, 2, 8, 4, 7, 6, 5, 9, 1 };

int main(void){
	int gap = 1;

	/* get gap */
	while(gap < MAX) gap = gap*3+1;

	for(; gap>0; gap=gap/3){
		for(int i = gap; i<MAX; i++){
			int v = arr[i];
			int j = i;
			while(j>0){
				if(arr[j] < arr[j-gap])
					arr[j-gap] = arr[j];
			}

		}
	}



}
