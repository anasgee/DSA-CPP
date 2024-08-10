// Binary Search Practice 03 august 2024


#include <iostream>
#include <algorithm>

using namespace std;
	
int binarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==key){
			return mid;
			break;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end = mid-1;
		}
		
	}
	return -1;
	
}

int main(){
	int arr[] ={1,3,4,2,8,5,9,10,30,21,22,11,15};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
	
//	Arry after Sorting;
	for(int i=0;i<size;i++){
		cout<<"number : " <<arr[i] <<" is at index: "<<i<<endl;
	}
	
	int key;
	cout<<"Enter any integer to find their index"<<endl;
	cin>>key;
	
	int indexx = binarySearch(arr,size,key);
	if(indexx !=-1){
	cout<<"Your integer is found at index: "<<indexx<<endl;}
	else{
		cout<<"Your intger not found at any index";
	}
}
