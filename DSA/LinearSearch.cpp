// Linear search

#include <iostream>
#include <algorithm>
using namespace std;

int singleSearch(int arr[],int size, int key){


for (int i=0; i<size;i++){
	if(arr[i]==key){
	return i;
	}

}
	return -1;
}
int main(){
	int arr[]={1,9,3,6,4,5,10};
//	\sorted {1,3,4,5,6,9,10---./,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,///,/,/,/,/,//,/,,//,/,,/,/,/,/
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
	int key=10;
	int result = singleSearch(arr,size,key);
	cout<<result;
	return 0;
}
