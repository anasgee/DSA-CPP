#include <iostream>
using namespace std;
int main(){
	
	int arr[]={1,6,5,4,6,3,10};
	int n= sizeof(arr)/sizeof(arr[0]);
	
//	Bubble Sort
	for(int i=0;i<n-1;i++){
		
		
		for(int j=0; j<n-1-i;j++){
			
			if(arr[j]>arr[j+1])
			{
//			swap(arr[j], arr[j+1]);
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1	]=temp;		
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<""<<endl;
	}
	
	return 0;
	
}
