#include <iostream>
#include <vector>
using namespace std;
 int countPairs(vector<int>& nums, int target) {
        int count=0;  
        for(int i=0;i<nums.size();i++){
            for(int j=1; j<nums.size(); j++){
                if(nums[i]+nums[j]<target){
                    count++;
                }
            }
        } 
        return count;
    }
    
int main(){
	
	int arr[]={-6,2,5,-2,-7,-1,3};
	int target=-2;
	
	vector <int>nums(arr,arr+sizeof(arr)/sizeof(arr[0]));
	int result = countPairs(nums,target);
	cout<<"number of pairs" <<""<<result<<endl;
	return 0;
}
