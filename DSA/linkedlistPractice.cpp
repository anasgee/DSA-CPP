#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void insertAtHead(Node* &head, int data){
//	create new node
	Node* temp = new Node(data);
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail,int data){
	Node* temp = new Node(data);
	tail->next = temp;
	tail =temp;
}


void insertAtMiddle(Node* &tail,Node* &head,int position, int data){
	
  	if(position==1){
		insertAtHead(head,data);
		return;
		
	}
	
	 Node* temp = head;
	 
	
	 	
		int count = 1;
	
//	
	while(count<position-1){
		temp = temp->next;
		count++;
	}
		Node* nodeToInsert = new Node(data);
		nodeToInsert->next = temp->next;
		temp->next = nodeToInsert;
	
		if(temp->next ==NULL){
		insertAtTail(tail,data);
		return;
	}
	
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
	Node* node1 = new Node(5);
	
	Node* head = node1;
	Node* tail = node1;
	
	insertAtHead(head,55);
//	display(head);
    insertAtTail(tail,3);
//display(head);
    	insertAtMiddle(tail,head,3,53);
         display(head);
//cout<<"Tail :"<<tail->data<<endl;
//cout<<"Head :"<<head->data<<endl;
	
	return 0;
}
