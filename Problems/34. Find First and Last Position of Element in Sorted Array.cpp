#include<bits/stdc++.h>
using namespace std;

int firstIndex(vector<int>& nums,int mid,int target){
	while(nums[mid]==target){
    			mid--;
    		}
    		return mid+1;

}
int secondIndex(vector<int>& nums,int mid,int target){
	while(nums[mid]==target){
    			mid++;
    		}
    		return mid-1;

}

  vector<int> searchRange(vector<int>& nums, int target) {
  	vector<int> v;
    int start=0,end=nums.size()-1;
    int mid;
    while(start <= end){

    	mid= start + (end-start)/2;
    	if(target< nums[mid]){
    		end=mid-1;
    	}
    	else if(target > nums[mid]){

    		start = mid+1;
    	}
    	else if(target == nums[mid]){
    		//cout << mid << endl;
    		
    		
    		v.push_back(firstIndex(nums,mid,target));
    		
    		v.push_back(secondIndex(nums,mid,target));
    		//cout<< v[0] << " " << v[1] ;
    		return v;

    		
    	}
    }  
   // cout << "-1" << "1";  
    return {-1,-1};

    }
 	
int main()
{
	vector<int> nums={2,3,4,4,4,6};
	int target = 4;
	
	searchRange(nums,target);


	return 0;
}