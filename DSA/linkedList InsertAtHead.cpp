#include <iostream>
using namespace std;




class Node{
	public:
		int data;
		Node* next;
	  Node(int x){
	  	this -> data= x;
	  	this->next = NULL;
	  }
	  
	  
		
};

void insertAtHead (Node* &head,int data){
	Node* temp = new Node(data);
	temp->next=head;
	head=temp;
}

void display(Node* &head){
	Node* temp = head;
	while(temp !=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


int main(){

	Node* node1=new Node(12);
	
	Node* head= node1;
	display(head);
	
	insertAtHead(head,14);
	display(head);
	return 0;
	
}

