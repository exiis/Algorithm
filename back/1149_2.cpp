#include<iostream>

using std::cin;
using std::cout;

int min(int a, int b){ 
	return a<b ? a : b;
}

int main(void){
	int N;
	
	int cost[1001][3];
	int v[1001][3];

	cin>>N;
	
	cost[0][0] = cost[0][1] = cost[0][2] = v[0][0] = v[0][1] = v[0][2] = 0;

	for(int i=1; i<=N; i++)
		cin>>cost[i][0]>>cost[i][1]>>cost[i][2];

	for(int i=1; i<=N; i++){
		v[i][0] = min(v[i-1][1], v[i-1][2]) + cost[i][0];
		v[i][1] = min(v[i-1][0], v[i-1][2]) + cost[i][1];
		v[i][2] = min(v[i-1][0], v[i-1][1]) + cost[i][2];

	}

	int M = 0;
	
	if(v[N][0] < v[N][1])
		if(v[N][0] < v[N][2])
			M = v[N][0];
		else
			M = v[N][2];
	else
		if(v[N][1] < v[N][2])
			M = v[N][1];
		else
			M = v[N][2];

	cout << M;
	return 0;
}

		
