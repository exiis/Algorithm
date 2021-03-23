#include<iostream>
#define MAX 8

using std::cout;

int arr[] = { 4, 2, 7, 3, 9, 1, 6, 5, 8 };
int main(void){
	for(int i=MAX-1; i>=0; i--)
		for(int j=i; j<MAX; j++)
			/* swap */
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}

	for(int i=0; i<MAX; i++)
		cout<<arr[i]<<" ";

	return 0;		
	
}
