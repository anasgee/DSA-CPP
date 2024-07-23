#include <iostream>
using namespace std;


int main(){
	
	
	int arr[]={6,5,3,-4,4,2,8};
	
	int n= sizeof(arr)/sizeof(arr[0]);
//	Selection sort start    //lower value will swap and place in 1st
	for(int i=0;i<n-1;i++){
		
		int mn=INT_MAX;
		int mindx=0;
	
		for(int j=i; j<n ; j++){
			if(mn>arr[j]){
				mn=arr[j];
				mindx=j;
			}
			
		}
		
		swap(arr[i], arr[mindx]);
	}

	
		for(int i=0;i<n;i++){
		cout<<arr[i];
		}	
		
	return 0;
}
