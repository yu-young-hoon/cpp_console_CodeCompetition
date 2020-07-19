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
// 소멸자의 경우 복잡도는 현재 들어있는 값의 개수에대해 n입니다. 큐에 현재 담겨진 만큼 해제가 필요합니다.
// 다른 method경우 복잡도는 1입니다.
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