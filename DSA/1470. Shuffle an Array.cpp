// Shuffle an array

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> shuffle(vector <int> nums, int n){
	
	vector <int>ans;
	int i=0;
	int j=n;
	while(i<n and j<2*n){
		ans.push_back(nums[i]);
		ans.push_back(nums[j]);
		i++;
		j++;
		
	}
	return ans;
}

int main(){
int nums[] = {1,3,5,2,4,6};
int n=3;
vector<int>numsArr (nums,nums+sizeof(nums)/sizeof(nums[0])) ;
vector <int> shuffled_Arr=shuffle(numsArr,n);
for(int i=0; i<shuffled_Arr.size();i++){
	cout<<shuffled_Arr[i]<<",";
	} 
	
	return 0;


}
