#include<bits/stdc++.h>
using namespace std;

 vector<int> productExceptSelf(vector<int>& nums) {
 			vector<int> v;
 			int mul=1,zero=0;
 			for(int i=0;i<nums.size();i++){
 				if(nums[i]==0){
 					zero++;
 				}
 				else{
 					mul = mul*nums[i];
 				}

 				
        
    }

    if(zero==1){
    	for(int j=0;j<nums.size();j++)
	    {
	    	if(nums[j]==0){
	    		v.push_back(mul);
	    	}
	    	else{
	    		v.push_back(0);
	    	}
	    	
	    	
	 		}


    }
    else if(zero ==0 ){
    	for(int j=0;j<nums.size();j++)
		    {
		    	    	v.push_back(mul/nums[j]);

		 		}

    }
    else{
    	 for(int j=0;j<nums.size();j++)
		    {
		    	
		    	v.push_back(0);
		 		}

    }

   

 			return v;
 }
int main()
{
	vector<int> nums={-1,1,0,-3,3};

	
	productExceptSelf(nums);


	return 0;
}