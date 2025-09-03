#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node(int data) {
		this->data = data;
		next = NULL;
	}
};

class ll {
	node* head;
	node* tail;
public:
	ll() {
		head = NULL;
		tail = NULL;
	}

	bool isempty() {
		return head == NULL;
	}

	node* create_node(int value) {
		node* Node = new node(value);
		return Node;
	}

	void insert_at_first(int value) {
		if (isempty()) {
			node* temp = create_node(value);
			temp->next = head;
			head = temp;
			tail = temp;
		}
		else {
			node* temp = create_node(value);
			temp->next = head;
			head = temp;
		}
	}
	void insert_at_last(int value) {
		node* temp = create_node(value);
		tail->next = temp;

	}
	
	void insert_at_middle(int position, int value) {
		if (position < 1) {
			cout << "Invalid position!" << endl;
			return;
		}

		node* temp = create_node(value);

		if (isempty()) {
			
			if (position == 1) {
				head = temp;
				return;
			}
			else {
				cout << "Position out of range!" << endl;
				delete temp;
				return;
			}
		}

		if (position == 1) {
			
			temp->next = head;
			head = temp;
			return;
		}

		node* current = head;
		int pos = 1;

		
		while (current != NULL && pos < position - 1) {
			current = current->next;
			pos++;
		}

		if (current == NULL) {
			cout << "Position out of range!" << endl;
			delete temp;
			return;
		}

		
		temp->next = current->next;
		current->next = temp;
	}

	void insert_pos() {
		
	}

	void display() {
		if (isempty()) {
			cout << "\nNO DATA EXIST\n";
			return;
		}
		node* current = head;
		while (current != NULL) {
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
};

int main()
{
	ll obj;
	cout << "insert node at begging :5\n";
	obj.insert_at_first(5);
	cout << "insert node at last :10\n ";
	obj.insert_at_last(10);
	cout << "insert node at position  2: value 69 \n";
		obj.insert_at_middle(2, 69);

		
	
		cout << "insert node at begging : 11\n";
		
	obj.insert_at_first(11);
	cout << "dislay \n ";
	obj.display();

	system("pause");
	return 0;
}
