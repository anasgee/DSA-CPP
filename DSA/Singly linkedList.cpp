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
	
	~Node(){
		int value;
		if(this->next!=NULL){
			delete next;
			this->next = NULL;
		}
	}
	
	
};


void insertAtHead(Node* &head,int data){
	Node* temp =new Node(data);
	temp->next = head;
	head =temp;
}


void insertAtTail(Node* &tail,int data){
	Node* temp = new Node(data);
	tail->next = temp;
	tail = temp;
	
}
void insertAtMiddle(Node* &tail,Node* &head, int position,int data){

if(position==1){
	insertAtHead(head,data);
	return;
}




	Node* temp = head;
	int count =1;
	
	while(count<position-1){
		temp=temp->next;
		count++;
	}
    Node* nodeToInsert = new Node(data);
	nodeToInsert->next= temp->next;
	temp->next = nodeToInsert;
	
	
	if(temp->next==NULL){
		insertAtTail(tail,data);
		return;
	}
}


//Delete a node 

void deleteNode(int position,Node* &head){
	if(position==1){
		Node* curr = head;
		head = head->next;
		
		
		curr->next=NULL;
		delete curr;
	}
	else{
		Node* curr= head;
		Node* per = NULL;
		
		int count=1;
		while(count<position){
			per=curr;
			curr = curr->next;
			count++;
		}
		per->next = curr->next;
		
		
		curr->next = NULL;
		delete curr;
	}
}

void display(Node* &head){
	Node* temp = head ;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}



int main(){
	Node* node1 = new Node(6);
	Node* head = node1;
	Node* tail =node1;
	
	insertAtHead(head,7);
	insertAtTail(tail,10);
	insertAtTail(tail,8);
	insertAtMiddle(tail,head,5,20);
	deleteNode(2,head);

	display(head);

	
	return 0;
}
