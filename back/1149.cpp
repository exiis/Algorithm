#include<iostream>

using std::cin;
using std::cout;


int min = -1;
int arr[1001][3];
int N;

void func(int count, int v, int pre){
	if(min != -1 && v >= min) return;
	if(count == N+1){
	       	min = v;
		return;
	}

	for(int i=0; i<3; i++){
		if(i == pre) continue;
		func(count+1, v+arr[count][i], i);
	}

}

int main(void){	
	cin>>N;

	int mem = -1;
	int result = 0;

	//cost
	for(int i=1; i<=N; i++)
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

	func(0, 0, 0);
	func(0, 0, 1);
	func(0, 0, 2);

	cout<<min;
}

