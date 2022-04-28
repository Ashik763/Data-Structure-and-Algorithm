#include<bits/stdc++.h>
using namespace std;

void reverseIt(vector<int>& nums ,int start,int end)
	{
		while(start<end)
		{
			int temp= nums[end];
			nums[end] = nums[start];
			nums[start] = temp;
			start++;
			end--;
		}
	}


    void rotate(vector<int>& nums, int k) {
    	int n=nums.size();
    	reverseIt(nums,0,nums.size()-1);
    	reverseIt(nums,0,(k%n) - 1);
    	
    	reverseIt(nums,(k%n),nums.size()-1);
    	
 		};

	



   
 	
int main()
{
	vector<int> nums={3,2,1};
	int k = 5;
	rotate(nums,k);


	return 0;
}