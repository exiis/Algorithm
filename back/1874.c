// #1874
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* top = NULL;

void push(int num){
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = num;
	new_node->next = top;
	top = new_node;
}

void pop(){
	if(top == NULL) return;

	node* temp;
	temp = top;
	top = top->next;
	free(temp);
}

int main(){
	int N;
	int value;
	scanf("%d", &N);
	char array[2N+1];
	int count=0;
	int cur = 1;
	int flag = 1;
	for(int i=0; i<N; i++){
		scanf("%d", &value);
		while(cur < value){
			push(cur++);
			array[count++] = '+';
		}

		if(value == cur){
			pop();
			array[count++] = '-';
		}

		else
			flag = 0;
	}

	if(flag)
		for(int i=0; i<count; i++)
			printf("%c\n", array[i]);
	else
		printf("NO\n");
	return 0;
}
