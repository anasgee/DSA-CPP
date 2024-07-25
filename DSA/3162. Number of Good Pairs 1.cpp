//leetcode: 3162 Find number of good pairs I;


#include <vector>
#include <iostream>
using namespace std;


int numberOfPairs(vector <int> &nums1, vector <int> &nums2, int k){
	int i=0;
	int j=0;
	
	int count =0;
	
	for (i=0;i<nums1.size();i++){
		for(j=0;j<nums2.size();j++){
			if(nums2[j]!=0 && nums1[i]% (nums2[j]*k)){
				count++;
			}
		}
	}
	return count;
}


int main(){
	int arr1[]={10,20,30};
	int arr2[]={2,4,6};
	int k=2;
	
	vector <int> nums1(arr1,arr1+sizeof(arr1)/sizeof(arr1[0]));
	vector <int> nums2(arr2,arr2+sizeof(arr2)/sizeof(arr2[0]));
	
	
	int result = numberOfPairs(nums1,nums2,k);
	cout<<"Number of pairs "<<result;
	
	return 0;

}
