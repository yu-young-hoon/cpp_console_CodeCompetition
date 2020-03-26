#pragma once
#include <stdio.h>
typedef struct node{
	node* after = NULL;
	node* before = NULL;
	int data = 0;
}yh_node, *yh_pNode;

class yh_doubleLinkedList
{
	yh_pNode headNode;
public:
	void appendNode(yh_pNode node){
		yh_pNode tempNode = headNode;
		while (tempNode->after != NULL)
		{
			tempNode = tempNode->after;
		}
		tempNode->after = node;
	};
	void printAll(){
		yh_pNode tempNode = headNode;
		printf("%d", tempNode->data);
		while (tempNode->after != NULL)
		{
			tempNode = tempNode->after;
			printf("%d", tempNode->data);
		}
	}
	yh_doubleLinkedList(yh_pNode node){
		headNode = node;
	};
	~yh_doubleLinkedList();
};

