/* #10989 수 정렬하기3 
 * 2021-03-19
 * written by SON
 * 
 * note 
 *  : 기수정렬로 정렬하였으나 문제는 메모리 제한으로 인하여 풀리지 않았음.
 *    다른 구현 방식을 선택하여 구현하였음.
 *    10989_solve.cpp 파일을 참고
 */


#include<iostream>
#include<math.h>

using std::cout;
using std::cin;

int arr1[10000000];
int arr2[10][1000000];

int count[10] = { 0 };

int main(void){
	int N;
	int pos;
	cin >> N;

	for(int i=0; i<N; i++)
		cin>>arr1[i];
	
	for(int i=1; i<9; i++){
		/* init count */
		for(int j=0; j<10; j++)
			count[j] = 0;

		/* store counting */
		for(int j=0; j<N; j++){
			pos = arr1[j] % (int)pow(10, i);
			pos = pos/(int)pow(10, i-1);
	
			arr2[pos][count[pos]] = arr1[j];
			count[pos]++;
		}

		/* resort */
		int resort = 0;
		for(int j=0; j<10; j++)
			for(int k=0; k<count[j]; k++)
				arr1[resort++] = arr2[j][k];
	}

	for(int i=0; i<N; i++)
		cout<<arr1[i]<<"\n";
	return 0;

}
