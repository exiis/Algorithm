#include<iostream>

using std::cout;
using std::cin;

int arr[1000000];

int partition(int l, int r){
	int piv_pos = r;
	int pv = arr[piv_pos];

	int LP = l;
	int RP = r-1;
	int temp;

	while(1){
		while(arr[LP]<pv)
			LP++;
		while(arr[RP]>pv)
			RP--;
		if(LP>RP) break;
		temp = arr[LP];
		arr[LP] = arr[RP];
		arr[RP] = temp;
	}
	temp = arr[LP];
	arr[LP] = arr[piv_pos];
	arr[piv_pos] = temp;

	return LP;
}

void quick_sort(int l, int r){
	if(l<r){
		int p = partition(l, r);
		quick_sort(l, p-1);
		quick_sort(p+1, r);
	}
}

int main(void){
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
		cin >> arr[i];

	quick_sort(0, N-1);
	
	for(int i=0; i<N; i++)
		cout<<arr[i]<<"\n";
}

