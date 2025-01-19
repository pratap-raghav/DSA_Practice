#include<stdio.h>
#include<stdlib.h>
#define msize 30

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

int main(){
	insertNodeEnd();
	insertNodeEnd();
	insertNodeEnd();
	return 0;
}
