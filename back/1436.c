// #1436

#include<stdio.h>

int queue[3] = {-1, -1, -1};

//init Queue
void init(){
	for(int i=0; i<3; i++)
		queue[i] = -1;
}

//insert
void inqueue(int input){
	if(queue[2] == -1)
		queue[2] = input;
	else if(queue[1] == -1)
		queue[1] = input;
	else if(queue[0] == -1)
		queue[0] = input;
	else{
		queue[2] = queue[1];
		queue[1] = queue[0];
		queue[0] = input;
	}
}

//check 666
int check(){
	if(queue[0] == 6 && queue[1] == 6 && queue[2] == 6)
		return 1;
	else
		return 0;
}

int main(void){
	int N;
	int num=0;
	int count = 0;
	
	scanf("%d", &N);

	while(count != N){
		num++;
		int temp = num;
		init();
		while(temp != 0){
			inqueue(temp%10);
			temp = temp/10;

			//find 666
			if(check()){
				count++;
				break;
			}
		}
	}

	printf("%d", num);
	return 0;
}

