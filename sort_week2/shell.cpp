#include<iostream>
#define MAX 9
using std::cout;

int arr[] = { 9, 1, 3, 4, 6, 7, 5, 2, 8 };

int main(){
	int gap = 1;
	while(1){
		if(gap*3+1 < MAX)
			gap = gap*3+1;
		else break;
	}
	
	int i, j;

	for(; gap>0; gap = gap/3){
		for(i=gap; i<MAX; i++){
			int v = arr[i];
			j = i;
			while(arr[j-gap] > v && j >= gap){
				arr[j] = arr[j-gap];
				j -= gap;
			}
			arr[j] = v;
		}
	}
	
	for(int i=0; i<MAX; i++)
		cout<<arr[i]<<" ";
	return 0;

}
