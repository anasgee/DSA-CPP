#include <iostream>
#include <vector>
using namespace std;

vector <int> concatination (vector <int> &nums){
	vector <int> ans(2*nums.size());
	for(int i=0; i<nums.size();i++){
		ans[i]=nums[i];
		ans[i+nums.size()]=nums[i];
	}
	return ans;
}

int main(){
	
	int arr[] = {1,2,3};
	int size  = sizeof(arr)/sizeof(arr[0]);
	
	vector <int>nums(arr,arr+size);
	vector <int>ansArr = concatination(nums);
	for(int i=0;i<ansArr.size();i++){
		cout<<ansArr[i]<<",";
	}
	
	
	return 0;
}

