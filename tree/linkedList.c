#include<stdio.h>
#include<stdlib.h>

struct node{
	char charData[20];
	struct node *next;
};

struct node *head;

void insertNodeEnd(){
	if(head == NULL){
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter Music Name: ");
		scanf("%s", &head->charData);
		return;
	}
	
	struct node *temp = head;
	
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = (struct node *)malloc(sizeof(struct node));
	printf("Enter Music Name: ");
	scanf("%s", &temp->next->charData);
	return;
}

void insertNodeBeg(){
	if(head == NULL){
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter Music Name: ");
		scanf("%s", &head->charData);
		return;
	}
	
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter Music Name: ");
	scanf("%s", &temp->charData);
	temp->next=head;
	head=temp;
}

void insertNodePos(int pos){
	int index=0;
	if(head == NULL){
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter Music Name: ");
		scanf("%s", &head->charData);
		return;
	}
	struct node *temp = head;
	while(temp->next!=NULL && index<pos-1 && pos>-1){
		temp = temp->next;
		index++;
	}

	struct node *newNode= (struct node *)malloc(sizeof(struct node));
	newNode->next=temp->next;
	temp->next=newNode;
	printf("Enter Music Name: ");
	scanf("%s", &temp->next->charData);
	return;
}

void traverseLL(){
	struct node *temp = head;
	printf("\nPlaylist: ");
	
	if(temp == NULL)
		printf("Empty...");
	
	while(temp!=NULL){
		printf(" ----> %s", temp->charData);
		temp = temp->next;
	}
	return;
}

void deleteNodeMid(int pos){
	int index = 0;
	
	if(head == NULL){
		printf("Empty Linked List...");
		return;
	}
	
	struct node *temp = head;
	while(index<pos-1){
		temp = temp->next;
		index++;
	}

	struct node *temp2 = temp->next->next;
	free(temp->next);
	temp->next=temp2;
	return;
	
}

int main(){
	int pos;
	traverseLL();
	printf("\n\n");
	insertNodeEnd();
	insertNodeEnd();
	insertNodeEnd();
	insertNodeBeg();
	insertNodeEnd();
	insertNodeEnd();
	traverseLL();
	printf("\n\npos: ");
	scanf("%d", &pos);
	insertNodePos(pos);
	traverseLL();
	printf("\n\npos: ");
	scanf("%d", &pos);
	deleteNodeMid(pos);
	traverseLL();
	/*
	struct node head;
	struct node *headPTR = & head;
	scanf("%s",&head.charData);
	printf("\n\nEntered Music: %s", head.charData);
	printf("\n\nEntered Music through PTR: %s", headPTR->charData);
	*/
	
	return 0;
}
