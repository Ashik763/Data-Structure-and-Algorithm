#include<bits/stdc++.h>
using namespace std;
    int search(vector<int>& nums, int target) {
        int start = 0,end = nums.size()-1;
	
	while(start <= end){
		int mid = (start+end)/2;
		
				if (nums[mid]==target) return mid;
			
		if(nums[mid]>= nums[start]){

			if(nums[start]<=target &&  target <= nums[mid]){
				end = mid-1;
				//cout << 1;
			}
			else{
				start= mid+1;
				//cout << 2;
			}
		}
		else{
			if(target >= nums[mid] && target <= nums[end]){
				start = mid+1;
			}
			else{
				end = mid-1;
			}

		}
		
	}
	// cout << -1;
	return -1;

    }
int main(){


	
}