#include<bits/stdc++.h>
using namespace std;

      bool canJump(vector<int>&nums){
      int target = nums.size()-1;
      for(int i=target-1;i>0;i--)
      {
          if(i+nums[i] >= target){
            target = i;
          }

      }
      cout << "a";
       return  (nums[0] >= target);


  }


int main(){

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    canJump(nums);

}