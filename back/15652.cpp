#include<iostream>

using namespace std;

int N, M;
int arr[10];

void func(int i, int level) {
	if (level == M) {
		for (int j = 0; j < M; j++)
			cout << arr[j]+1 << " ";
		cout << "\n";
		return;
	}
	for (; i < N; i++) {
		arr[level] = i;
		func(i, level + 1);
		
	}
}

int main(void) {
	cin >> N >> M;
	func(0, 0);
	return 0;
}
