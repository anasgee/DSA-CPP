#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node* next;
		
	Node(int x){
		this->data = x;
		this->next =NULL;
	}
	
//	

//WHy we use destructor????
    ~Node(){
       int value = this->data;
       if(this->next !=NULL){
       	delete next;
       	this->next=NULL;	
	   }
	}
	
};
void insertAtHead(Node* &head,int data){
	
	Node* temp = new Node(data);
	temp->next = head;
	head= temp;
	
	
}

void insertAtTail(Node* &tail, int data){
	Node* temp = new Node(data);
	tail->next= temp;
	tail = temp;
}

void insertAtMiddle(Node* &tail,Node* &head,int position, int data){
	if(position==1){
		insertAtHead(head,data);
		return;
		
	}
	

	Node* temp = head;
	
	int count = 1;
	
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


void deleteNode(int position, Node* &head){
	
	if(position==1){
		Node* curr = head;
		head = head->next;
		curr->next = NULL;
		delete curr;
		
	}
	
	else{
		Node* curr = head;
		Node* per = NULL;
		int count = 1;
		while(count<position){
			per=curr;
			curr= curr->next;
			count++;
		}
		per->next = curr->next;
		curr -> next = NULL;
		delete curr;
		
		
		
	}
	
	
	
	
}

void display(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;

	}
	cout<<endl;
}

int main(){
	Node* node1 = new Node(12);

	Node* head = node1;
	Node* tail =node1;
	insertAtHead(head,23);
//	display(head);
	insertAtTail(tail,15);
//	display(head);
	
	insertAtMiddle(tail,head,3,53);
//	display(head);

	deleteNode(1,head);
	display(head);
	
	return 0;	
}
