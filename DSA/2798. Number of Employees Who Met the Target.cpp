
#include <iostream>
#include <vector>
using namespace std;


int numberOfEmployeesWhoMeetTarget( vector <int> &hours, int target){
	
	int count=0;
	
	for(int i=0;i<hours.size();i++){
		if(hours[i]>=target){
			count++;
		}
	}
	return count;
	
	
}

int main(){
 int array[]={1,4,5,3,0};
	int target=2;
	vector <int> hours(array,array+sizeof(array)/sizeof(array[0]));
int result =	numberOfEmployeesWhoMeetTarget(hours,target);
	cout<<"number of employees who meet the target : "<<result<<endl;
	return 0;
}
