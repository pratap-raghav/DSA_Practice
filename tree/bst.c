#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *lChild, *rChild;
};

struct node *insertNode(struct node *root, int data){
	if(root == NULL){
		root = (struct node *)malloc(sizeof(struct node));
		root->data=data;
		root->lChild = NULL;
		root->rChild = NULL;
		return root;
	}
	if(root->data < data){
		root->rChild = insertNode(root->rChild, data);
	}
	else if(root->data > data){
		root->lChild = insertNode(root->lChild, data);
	}
	else{
		printf("Duplicate Value....\n");
	}
	return root;
}

void inorder(struct node *root){
	if(root == NULL){
		return;
	}
	inorder(root->lChild);
	printf(" %d", root->data);
	inorder(root->rChild);
}

void preorder(struct node *root){
	if(root == NULL){
		return;
	}
	printf(" %d", root->data);
	preorder(root->lChild);
	preorder(root->rChild);
}

void searchNode(struct node *root, int element){
	if(root == NULL){
		printf("-> [x]");
		return ;
	}
	printf("-> %d", root->data);
	if(root->data == element)
		return ;
	if(root->data < element){
		return searchNode(root->rChild, element);
	}
	else{
		return searchNode(root->lChild, element);
	}
}

struct node *findMinValue(struct node *root){
	struct node *temp = root;
	while(temp->lChild!=NULL){
		temp=temp->lChild;
	}
	return temp;
}

struct node *findMaxValue(struct node *root){
	struct node *temp = root;
	while(temp->rChild!=NULL){
		temp=temp->rChild;
	}
	return temp;
}

struct node *deleteNode(struct node* root, int element){
	if(root==NULL){
		return NULL;
	}
	if(root->data==element){
		if(root->lChild==NULL && root->rChild==NULL){
			free(root);
			return NULL;
		}
		else if(root->lChild != NULL && root->rChild == NULL){
			struct node *temp = root->lChild;
			free(root);
			return temp;
		}
		else if(root->rChild != NULL && root->lChild == NULL){
			struct node *temp = root->rChild;
			free(root);
			return temp;
		}
		else if(root->lChild != NULL && root->rChild != NULL){
			int minValue = findMinValue(root->rChild)->data;
			root->data = minValue;
			root->rChild = deleteNode(root->rChild, minValue);
			return root;
		}
	}
	else if(root->data < element){
		root->rChild = deleteNode(root->rChild, element);
	}
	else{
		root->lChild = deleteNode(root->lChild, element);
	}
	return root;
}

void main(){
	int data;
	printf("Enter Data: ");
	scanf("%d", &data);
	struct node *root = NULL;
	while(data!=-1){
		root = insertNode(root, data);
		printf("Enter Data: ");
		scanf("%d", &data);
	}
	
	printf("Inorder: ");
	inorder(root);
	
	
	printf("\n");
	printf("Preorder: ");
	preorder(root);
	
	
	printf("\n\nBINARY SEARCH TREE INSERTION\nEnter data to insert in the BST: ");
	scanf("%d", &data);
	root = insertNode(root, data);
	
	
	printf("Inorder: ");
	inorder(root);
	
	
	printf("\n\n");
	printf("Preorder: ");
	preorder(root);
	
	
	printf("\n\n");
	printf("BINARY SEARCH TREE ELEMENT SEARCH\nEnter element: ");
	scanf("%d", &data);
	searchNode(root, data);
	
	
	printf("\n\nMin value in TREE: %d", findMinValue(root)->data);
	printf("\n\nMax value in TREE: %d", findMaxValue(root)->data);
	
	
	root = deleteNode(root, 15);
	
	
	printf("\n\nInorder: ");
	inorder(root);
	
	
	printf("\n\n");
	printf("Preorder: ");
	preorder(root);
	printf("\n\n");
	searchNode(root, 15);
	
}//10 146 5 10 14 8 36 24 14 60 41 26 24 -1 15 15
