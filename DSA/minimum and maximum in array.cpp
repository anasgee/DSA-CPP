#include <iostream>
#include <algorithm>

using namespace std;



	

int main(){
	int originalArray[]= {3,16,3,2,1,4,9,6,5};
	
	  int size= sizeof(originalArray) / sizeof(originalArray[0]);
	  
//	  first of all include library,
// sort function takes two aurguments, 1 array, second its 
	  sort(originalArray,originalArray+size);
	  
	  
	  cout<<"Minimum :"<<originalArray[0]<<endl<<"Highest :"<<originalArray[size-1]<<endl;
	  
	  return 0;
}
