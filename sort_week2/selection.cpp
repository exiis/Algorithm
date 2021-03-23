#include<iostream>
#define MAX 9

using std::cout;

int arr[] = { 3, 4, 1, 9, 2, 6, 5, 7, 8 };

int main(void){
	int min;
	int i, j, temp;
	/* n번 반복 : 1 ~ n번째 까지 정렬 */
	for(i=0; i<MAX; i++){
		min = i;
		/* 가장 작은 값을 찾는다 */
		for(j=i; j<MAX; j++)
			if(arr[min] > arr[j]) min = j;
		/* swap */
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for(int i=0; i<MAX; i++)
		cout<< arr[i] << " ";
	return 0;
}
