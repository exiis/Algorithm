#include<iostream>

using std::cout;
using std::cin;

int mem[1000001] = {0};

int func(int n){
    if(mem[n] != 0) return mem[n];
    else{
        mem[n] = (func(n-1) + func(n-2))%15746;
	return mem[n];
    }
}
int main(void){
    mem[1] = 1;
    mem[2] = 2;
    mem[3] = 3;
    int N;
    cin >> N;
    cout << func(N);
}
