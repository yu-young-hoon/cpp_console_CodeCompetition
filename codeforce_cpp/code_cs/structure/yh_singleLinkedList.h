#pragma once
#include <stdio.h>
typedef struct node{
	node* next=NULL;
	int data = 0;
}yh_node,*yh_pNode;

class yh_singleLinkedList
{
	yh_pNode headNode;
public:
	void appendNode(yh_pNode node){
		yh_pNode tempNode = headNode;
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = node;
	};
	void printAll(){
		yh_pNode tempNode = headNode;
		printf("%d", tempNode->data);
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;
			printf("%d", tempNode->data);
		}
	}
	yh_singleLinkedList(yh_pNode node){
		headNode = node;
	};
	~yh_singleLinkedList();
};

