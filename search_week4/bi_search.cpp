/* # binary search Alg.
 * # 2021-03-30
 * # SON
 */

#include<iostream>
#define MAX 9

using std::cout;
using std::cin;

int arr[MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int main(void){
	int x;
	cout<<"number : ";
	cin >> x;
	
	int left = 0;
	int right = 8;
	int mid;
	while(1){
		if(left > right) {
			cout<<"not found..\n";
			break;
		}
		mid = (left + right)/2;
		if(arr[mid] == x) {
			cout<<"find!\n";
			cout<<"mid : "<<mid<<"\n";
			break;
		}
		else if(arr[mid] > x) right = mid-1;
		else if(arr[mid] < x) left = mid + 1;
	}
	return 0;	
}
