///////used first task code 
//
//#include<iostream>
//using namespace std;
//
//struct node {
//	int data;
//	node* next;
//	node(int data) {
//		this->data = data;
//		next = NULL;
//	}
//};
//
//class ll {
//	node* head;
//	node* tail;
//public:
//	ll() {
//		head = NULL;
//		tail = NULL;
//	}
//
//	bool isempty() {
//		return head == NULL;
//	}
//
//	node* create_node(int value) {
//		node* Node = new node(value);
//		return Node;
//	}
//
//	void insert_at_first(int value) {
//		if (isempty()) {
//			node* temp = create_node(value);
//			temp->next = head;
//			head = temp;
//			tail = temp;
//		}
//		else {
//			node* temp = create_node(value);
//			temp->next = head;
//			head = temp;
//		}
//	}
//	void insert_at_last(int value) {
//		node* temp = create_node(value);
//		tail->next = temp;
//
//	}
//
//	void insert_at_middle(int position, int value) {
//		if (position < 1) {
//			cout << "Invalid position!" << endl;
//			return;
//		}
//
//		node* temp = create_node(value);
//
//		if (isempty()) {
//
//			if (position == 1) {
//				head = temp;
//				return;
//			}
//			else {
//				cout << "Position out of range!" << endl;
//				delete temp;
//				return;
//			}
//		}
//
//		if (position == 1) {
//
//			temp->next = head;
//			head = temp;
//			return;
//		}
//
//		node* current = head;
//		int pos = 1;
//
//
//		while (current != NULL && pos < position - 1) {
//			current = current->next;
//			pos++;
//		}
//
//		if (current == NULL) {
//			cout << "Position out of range!" << endl;
//			delete temp;
//			return;
//		}
//
//
//		temp->next = current->next;
//		current->next = temp;
//	}
//
//	void insert_pos() {
//
//	}
//
//	void display() {
//		if (isempty()) {
//			cout << "\nNO DATA EXIST\n";
//			return;
//		}
//		node* current = head;
//		while (current != NULL) {
//			cout << current->data << " ";
//			current = current->next;
//		}
//		cout << endl;
//	}
//	void find_middle() {
//		node*slow = head;
//		node*fast = head;
//		
//		while (fast !=NULL && fast->next != NULL) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		cout << "middle node data is " << slow->data << endl;
//	}
//};
//
//int main()
//{
//	ll obj;
//	int nodes = 5;
//	for (int i = 0; i < nodes; i++)
//	{
//		obj.insert_at_first((i *2)+ 2);
//	}
//	cout << "dislay \n ";
//	obj.display();
//	obj.find_middle();
//	
//
//	system("pause");
//	return 0;
//}
