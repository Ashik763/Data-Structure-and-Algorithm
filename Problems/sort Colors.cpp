#include<bits/stdc++.h>
using namespace std;

  void sortColors(vector<int>& nums) {
  	vector<int> v ;
  		for(int i=1;i<nums.size();i++)
  		{
  			int j=i;
  			while(j>0)
  			{
  				if(nums[j-1]>nums[j]) {
  					swap(nums[j-1],nums[j]);
  				}
  				j--;
  			}
  		}
  		return ;
  		

        
  }
 	
int main()
{
	vector<int> nums={2,0,2,1,1,0};
	//int k = 5;
	sortColors(nums);


	return 0;
}