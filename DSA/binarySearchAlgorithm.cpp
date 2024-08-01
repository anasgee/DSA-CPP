#include <iostream>
#include <algorithm>


using namespace std;



int binarySearchAlgorithm(int arr[],int size, int key){
	
	
	int start=0;
	int end=size-1;
	while(start<=end){
		int mid = (start+end)/2; ///find mid point of any array................ 
		if(arr[mid]==key){     //if array ka mid point === search key , then return mid as response;
			return mid;
			break;
		}
		else if(arr[mid] > key){   
			end  = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
	
}


int main(){
	int arr[] = {1,6,32,4,2,6,8,5,9,10,40,20,30};
	int size= sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
//	for(int i=0;i<size-1;i++){
//	cout<<arr[i]<<",";
//	}
	int searchIndex;
	cout<<"\n\n\n\n\n                                ********************BINARY SEARCH**********************"<<endl;
	cout<<"Enter number for Binray Search"<<endl;
	cin>>searchIndex;
	int result = binarySearchAlgorithm(arr,size,searchIndex);
	
	if(result !=-1){
		cout<<"The result is : "<<result;
	}
	else{
		cout<<"Your required number not found in Array";
	}
//	return 0;
}
