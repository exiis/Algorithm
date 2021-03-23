#include<iostream>

using std::cout;

int arr[] = { 4, 9, 5, 1, 3, 6, 2, 7, 8 };
int main(void){
	int i, j, cur;
	for(i=1; i<9; i++){
		cur = arr[i];
		for(j=i; j>0; j--){
			if(cur < arr[j-1]) arr[j] = arr[j-1];
			else break;
		}
		arr[j] = cur;
	}

	for(int i=0; i<9; i++)
		cout<<arr[i]<<"\n";
	return 0;
}
