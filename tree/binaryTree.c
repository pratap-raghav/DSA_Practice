#include<stdio.h>
#include<stdlib.h>

int arr[50], i=0, count=0;


struct node{
	int data;
	struct node *lChild, *rChild;
};

struct node *build(struct node *root){
	int data;
	printf("Enter data: ");
	scanf("%d", &data);
	arr[i]=data;
	i++;
	if(data==-1){
		return NULL;
	}
	root = (struct node *)malloc(sizeof(struct node));
	root->data=data;
	
	printf("\nEntering Left Child\n");
	root->lChild=build(root->lChild);
	printf("\nEntering Right Child\n");
	root->rChild=build(root->rChild);
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

void postorder(struct node *root){
	if(root == NULL){
		return;
	}
	postorder(root->lChild);
	postorder(root->rChild);
	printf(" %d", root->data);
}


void countLeaf(struct node *root){
	if(root == NULL){
		return;
	}
	countLeaf(root->lChild);
	if(root->lChild==NULL && root->rChild==NULL){
		count++;
	}
	countLeaf(root->rChild);
}

int main(){
	//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	int x;
	struct node *root=NULL;
	root = build(root);
	printf("\n\n\n");
	for(x=0; x<i; x++){
		printf("\t%d", arr[x]);
	}
	printf("\n\n\n");
	inorder(root);
	printf("\n\n\n");
	preorder(root);
	printf("\n\n\n");
	postorder(root);
	printf("\n\n\n");
	countLeaf(root);
	printf("%d", count);
	
	return 0;
}
