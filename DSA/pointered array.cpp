#include <iostream>
using namespace std;

int main(){
	int num = 12;
	
	
int* ptr1 = &num;
int* ptr2 = ptr1+4;
	 
	 cout<<&num<<endl;
	 cout<<ptr2<<endl;
	 
	 cout<<ptr2-&num<<endl;
	
	return 0;
}
