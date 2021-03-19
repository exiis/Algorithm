#include<iostream>

using std::cin;
using std::cout;

long array[101] = {0};

long func(int num){
	if(array[num] != 0) return array[num];
	else {
		array[num] = func(num-2) + func(num-3);
		return array[num];
	}
}

int main(void){
	int N;
	cin >> N;

	array[1] = 1;
	array[2] = 1;
	array[3] = 1;
	array[4] = 2;
	array[5] = 2;
	array[6] = 3;
	array[7] = 4;
	array[8] = 5;
	array[9] = 7;
	array[10] = 9;

	int num = 0;
	for(int i=0; i<N; i++){
		cin >> num;
		cout << func(num) << "\n";
	}
	return 0;	
}
