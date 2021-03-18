// 2164.c

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* queue = NULL;
node* back = NULL;

void push(int data){
	node* new_node = (node*)malloc(sizeof(node));
	new_node->next = NULL;
	new_node->data = data;
	
	/* empty queue */
	if(queue == NULL){
		queue = new_node;
		back = new_node;
	}
	/* else */
	else{
		back->next = new_node;
		back = new_node;
	}
}

int pop(){
	if(queue == NULL) return -1;

	node* temp = queue;
	queue = queue->next;

	/* save data */
	int ret = temp->data;

	free(temp);
	return ret;
}

int main(void){
	int N;
	scanf("%d", &N);

	/* set data */
	for(int i=0; i<N; i++)
		push(i+1);

	/* pop & push */
	int temp;
	for(int i=0; i<N-1; i++){
		pop();
		temp = pop();
		push(temp);
	}

	printf("%d\n", queue->data);
}
