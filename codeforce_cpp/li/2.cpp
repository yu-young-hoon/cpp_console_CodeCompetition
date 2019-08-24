#include <iostream>
#include <string>

using namespace std;

class node
{
public:
	node* next = nullptr;
	string data;
};

class queue {
private:
	int maxLength;
	int length;
	node* head;
	node* last;
	queue();
public:
	queue(int maxLength) {
		this->maxLength = maxLength;
		this->length = 0;
		this->head = nullptr;
		this->last = nullptr;
	}
	~queue() {
		while (head != nullptr) {
			node* nextNode = head->next;
			delete head;
			head = nextNode;
		}
	}

	void offer(string data) {
		if (maxLength == length) {
			cout << "false" << endl;
			return;
		}
		else {
			node* n = new node();
			n->data = data;
			if (length == 0) {
				head = n;
				last = n;
			}
			else {
				head->next = n;
				last = n;
			}
			cout << "true" << endl;
			length++;
		}
	}

	void take() {
		if (length == 0) {
			return;
		}
		cout << head->data << endl;

		node* newHead = head->next;
		delete head;

		head = newHead;
		length--;
	}

	void sizes() {
		cout << length << endl;
	}
};
// �Ҹ����� ��� ���⵵�� ���� ����ִ� ���� ���������� n�Դϴ�. ť�� ���� ����� ��ŭ ������ �ʿ��մϴ�.
// �ٸ� method��� ���⵵�� 1�Դϴ�.
int main() {
	int command, maxlenth;
	cin >> command >> maxlenth;
	queue* q = new queue(maxlenth);

	for (int i = 0; i < command; ++i) {
		string cm;
		cin >> cm;
		if (cm == "OFFER") {
			string data;
			cin >> data;
			q->offer(data);
		}
		else if (cm == "TAKE") {
			q->take();
		}
		else if (cm == "SIZE") {
			q->sizes();
		}
	}

	delete q;

	return 0;
}