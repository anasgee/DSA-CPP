#include <iostream>
using namespace std;


void setSortedFunction(int arr[], int size){
	int reversedArray[size];
	for(int i=0; i<size;i++){
		reversedArray[i] = arr[size-i-1];
	}
	
	cout<<"Reversed Array"<<endl;
	for(int i=0; i<size;i++){
		cout<<reversedArray[i]<<"";
	}
	
	
}
int main(){
	int originalArray[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(originalArray) / sizeof(originalArray[0]);
	
	setSortedFunction(originalArray,size);
	return 0;
}


