/* Binary Tree Search Alg
 * 2021-03-30
 * SON
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct N{
	int data;
	struct N* left;
	struct N* right;
}node;


void insert(node** root, int data){
	node* temp = *root;
	node* new_node = (node*)malloc(sizeof(node));
	
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;

	temp->right = new_node;
	
}
int main(void){
	node* root = (node*)malloc(sizeof(node));
	root->data = 10;
	root->left = NULL;
	root->right = NULL;

	insert(&root, 44);
	printf("%d", root->right->data);
	return 0;
}
















































