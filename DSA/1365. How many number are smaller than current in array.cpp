//#1365


#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerThanCurrent(vector <int> nums){
	
	vector<int> result;
	
	for(int i=0; i<nums.size();i++){
		int count =0;
		for(int j=0;j<nums.size();j++){
			if(j!=i && nums[j]<nums[i]){
				count ++;
			}
			
		}
		result.push_back(count);
	}
	return result;
	
}

int main(){
	int arr[]= {1,3,2,6,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	vector<int> ans(arr, arr+size);
	vector <int> ansArr = smallerThanCurrent(ans);
	
	for(int i=0;i<ansArr.size();i++){
		cout<<ansArr[i]<<",";
	}
	return 0;
}
