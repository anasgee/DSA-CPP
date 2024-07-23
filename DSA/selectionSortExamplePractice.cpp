//Selection Sort Example no 2


#include <iostream>
using namespace std;

int main(){
	
	int arr[]={1,5,7,4,3,9,10,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<n-1;i++){
		
		
		int mn=INT_MAX;
		int minIndex=0;
		
		
		for (int j=i;j<n;j++){
			
			if(mn>arr[j]){
				mn=arr[j];
				minIndex=j;
			}
		}
//		swap(arr[i],arr[minIndex]);   we can also use this method
  			int temp=arr[i];
			arr[i]= arr[minIndex];
			arr[minIndex]=temp;
	}
	for(int i=0; i<n;i++){
		cout<<arr[i]<<"--";
	}
	return 0;
	
	
}
