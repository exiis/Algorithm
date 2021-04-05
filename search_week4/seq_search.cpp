/*
 * # Sequential Search
 * # 2021-03-30
 * # SON
 */

#include<iostream>
#define MAX 9

using std::cout;
using std::cin;

int arr[MAX] = { 6, 2, 1, 3, 9, 4, 5, 7, 8 };

int main(void){
	cout<<"**cur array**\n";
	cout<<"[";
	for(int i=0; i<MAX; i++)
		cout<<arr[i]<<" ";
	cout<<"]\n";

	int x;
	cout<<"number : ";
	cin>>x;
	int i;
	for(i=0; i<MAX; i++){
		if(arr[i] == x) {
			cout<<"at "<<i<<"\n";
			break;
		}
	}

	if(i==MAX) cout<<"not found...\n";
	return 0;
}
