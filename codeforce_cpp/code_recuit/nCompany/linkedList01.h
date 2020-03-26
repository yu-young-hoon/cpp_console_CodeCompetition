#include <Windows.h>
#include <iostream>

struct Node01
{
	Node01* next = nullptr;
	int data = 0;
};

class LinkedList01
{
public:
	void Add(int data) {
		Node01* addNode = new Node01();
		addNode->data = data;

		if (head == nullptr)
			head = addNode;
		else
		{
			addNode->next = head;
			head = addNode;
		}
	}
	void PrintAll() {
		Node01* node = head;
		while (node != nullptr)
		{
			std::cout << node->data << std::endl;
			node = node->next;
		}
	}
private:
	Node01* head = nullptr;
};