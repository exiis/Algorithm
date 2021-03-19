#include<iostream>

using std::cin;
using std::cout;

int tri[501][501] = {0};
int mem[501][501] = {0};

int max(int& a, int& b){
	return a>b ? a : b;
}

int main(void){
	int N;

	cin>>N;

	
	//triangle
	for(int i=1; i<=N; i++)
		for(int j=1; j<=i; j++)
			cin>>tri[i][j];
	
	for(int i=1; i<=N; i++)
		for(int j=1; j<=i; j++)
			mem[i][j] = max(mem[i-1][j-1], mem[i-1][j]) + tri[i][j];
		
	int M = mem[N][1];
	for(int i=2; i<=N; i++)
		if(M < mem[N][i]) M = mem[N][i];

	cout<<M;
	return 0;
}
