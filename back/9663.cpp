#include<iostream>

using namespace std;

bool arr[15][15] = {false};
int N;
int cnt = 0;

void NQueen(int level){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			/* found */
			if(level == N){
				cnt++;
				return;
			}

			/* false : 놓을 수 있음 */
			if(!arr[i][j]){
				arr[i][j] = true;

				/* 상하좌우 */
				for(int x=0; x<N; x++)
					arr[x][j] = true;
				for(int y=0; y<N; y++)
					arr[i][y] = true;

				/* 기울기가 음의 대각선 */
				int max = i>j ? i : j;
				int sx = j-max;
				int sy = i-max;
				while(true){
					if(sx>=N || sy>=N) break;
					arr[sy][sx] = true;
					sy++;
					sx++;
				}
				
				/* 기울기가 양의 대각선 */
				//왼쪽대각선
				sx = j-1;
				sy = i+1;
				while(true){
					if(sx<0 || sy>=N) break;
					arr[sy][sx] = true;
					sx--;
					sy++;
				}
				//오른쪽대각선
				sx = j+1;
				sy = i-1;
				while(true){
					if(sy<0 || sx>=N) break;
					arr[sy][sx] = true;
					sx++;
					sy--;
				}
				
				/* queen이 놓여진 상태로다음 단계로 */
				NQueen(level+1);

				/* 다른 queen을 위하여 롤백 */
                                for(int x=0; x<N; x++)
                                        arr[x][j] = false;
                                for(int y=0; y<N; y++)
                                        arr[i][y] = false;

                                max = i>j ? i : j;
                                sx = j-max;
                                sy = i-max;
                                while(true){
                                        if(sx>=N || sy>=N) break;
                                        arr[sy][sx] = false;
                                        sy++;
                                        sx++;
                                }

                                sx = j-1;
                                sy = i+1;
                                while(true){
                                        if(sx<0 || sy>=N) break;
                                        arr[sy][sx] = false;
                                        sx--;
                                        sy++;
                                }

                                sx = j+1;
                                sy = i-1;
                                while(true){
                                        if(sy<0 || sx>=N) break;
                                        arr[sy][sx] = false;
                                        sx++;
                                        sy--;
                                }

			}
		}
	}
}

int main(void){
	cin>>N;
	NQueen(0);
	cout<<cnt;
	return 0;
}
