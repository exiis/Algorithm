// #1920

#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}node;

node* root = NULL;

void insert(int num){
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = num;
	new_node->left = NULL;
	new_node->right = NULL;

	if(root == NULL)
		root = new_node;
	else{
		node* temp = root;
		/* find node */
		while(1){
			if(temp->data > num){
				if(temp->left == NULL){
					temp->left = new_node;
					break;
				}
				else
					temp = temp->left;
			}
			else{
				if(temp->right == NULL){
					temp->right = new_node;
					break;
				}
				else
					temp = temp->right;
			}
		}
	}
}

void find(int num){
	if(root == NULL) return;
	node* temp = root;
	while(temp != NULL){
		if(temp->data == num){
			printf("1\n");
			return;
		}
		else if(temp->data > num)
			temp = temp->left;
		else
			temp = temp->right;
	}
	printf("0\n");
}

int main(void){
	int N, M;
	int num;

	/* input */
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &num);
		insert(num);
	}

	/* find */
	scanf("%d", &M);
	for(int i=0; i<M; i++){
		scanf("%d", &num);
		find(num);
	}

	return 0;
}
