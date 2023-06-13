#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void print(Node* obj){
	while(obj!=NULL){
		cout<<obj->data<<endl;
		obj = obj->next;
	}
}

int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* three = new Node();

	head->data = 5;
	head->next = second;

	second->data = 6;
	second->next = three;

	three->data = 7;
	three->next = NULL;

	print(head);

	return 0;
}
