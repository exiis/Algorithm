// #10845

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* head = NULL;
int size = 0;

void push(int data){
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = data;
	new_node->next = NULL;
	if(head == NULL) head = new_node;
	else{
		node* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
		
	size++;
}

void pop(){
	if(head == NULL){
	       	printf("-1\n");
		return;
	}
	node* temp = head;
	printf("%d\n", head->data);
	head = head->next;
	free(temp);
	size--;
}

void qsize(){
	printf("%d\n", size);
}

void empty(){
	if(head == NULL) printf("1\n");
	else printf("0\n");
}

void front(){
	if(head == NULL) printf("-1\n");
	else printf("%d\n", head->data);
}

void back(){
	if(head == NULL) printf("-1\n");
	else{
		node* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		printf("%d\n", temp->data);
	}
}

int main(void){
	int N;
	char cmd[10];
	int data;

	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%s", cmd);
		//pUsh, pOp, sIze, eMpty, fRont, bAck
		if(cmd[1] == 'u'){
			scanf("%d", &data);
			push(data);
		}
		else if(cmd[1] == 'o')
			pop();
		else if(cmd[1] == 'i')
			qsize();
		else if(cmd[1] == 'm')
			empty();
		else if(cmd[1] == 'r')
			front();
		else if(cmd[1] == 'a')
			back();
	}
	return 0;
}
