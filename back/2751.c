// #2751

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환

    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환

    return 0;    // a와 b가 같을 때는 0 반환
}

int main(void){
	int N;
	scanf("%d", &N);
	
	int array[N];

	for(int i=0; i<N; i++)
		scanf("%d", &array[i]);

	qsort(array, N, sizeof(int), compare);

	for(int i=0; i<N; i++)
		printf("%d\n", array[i]);
	return 0;
}

