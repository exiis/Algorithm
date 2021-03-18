// #18258

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* node def */
typedef struct Node{
	int data;
	struct Node* next;
}node;

/* front, back, size */
node* front = NULL;
node* back = NULL;
int size = 0;

/* push */
void push(int num){
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = num;
	new_node->next = NULL;

	if(front == NULL){
		front = new_node;
		back = new_node;
	}
	else {
		back->next = new_node;
		back = back->next;
	}
	size++;
}

/* pop */
void pop(){
	/* no queue */
	if(back == NULL){
		printf("-1\n");
		return;
	}

	// 최적화가능
	printf("%d\n", front->data);
	node* temp = front;
	front = front->next;

	//no queue
	if(front == NULL) back = NULL;

	free(temp);
	size--;
}

/* size */
void ptr_size(){
	printf("%d\n", size);
}

/* empty */
void is_empty(){
	if(front == NULL)
		printf("1\n");
	else
		printf("0\n");
}

/* front */
void ptr_front(){
	if(front != NULL )
		printf("%d\n", front->data);
	else
		printf("-1\n");
}

/* back */
void ptr_back(){
	if(back != NULL)
		printf("%d\n", back->data);
	else
		printf("-1\n");
}	

int main(void){
	int N;
	int num;
	char *cmd = (char*)malloc(sizeof(char)*10);

	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%s", cmd);
		if(!strcmp(cmd, "push")){
			scanf("%d", &num);
			push(num);
		}
		else if(!strcmp(cmd, "pop"))
			pop();
		else if(!strcmp(cmd, "size"))
			ptr_size();
		else if(!strcmp(cmd, "empty"))
			is_empty();
		else if(!strcmp(cmd, "front"))
			ptr_front();
		else if(!strcmp(cmd, "back"))
			ptr_back();
	}
	
	return 0;
}
