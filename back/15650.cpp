#include<iostream>

using namespace std;

int N, M;
int arr[10];
bool visit[10] = { false };

void func(int i, int level) {
	if (level == M) {
		for (int j = 0; j < M; j++)
			cout << arr[j] << " ";
		cout << "\n";
		return;
	}
	for (; i < N; i++) {
		if (!visit[i]) {
			arr[level] = i;
			visit[i] = true;
			func(i + 1, level + 1);
			visit[i] = false;
		}
	}
}

int main(void) {
	cin >> N >> M;
	func(0, 0);
	return 0;
}
