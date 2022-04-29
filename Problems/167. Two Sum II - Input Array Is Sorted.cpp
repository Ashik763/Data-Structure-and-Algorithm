#include<bits/stdc++.h>
using namespace std;


  vector<int> twoSum(vector<int>& numbers, int target) {
  	int start = 0,end = numbers.size()-1;
  	vector<int> output ={-1,-1};
  	while(start < end){
  		if(numbers[start]+numbers[end]==target){
  			output[0]=start+1;
  			output[1] = end+1;
  			cout << output[0] <<  " " << output[1];
  			return output;

  		}
  		else if(numbers[start]+numbers[end] < target){
  			start++;
  		}
  		else {
  			end--;
  		}
  	}
  	return output;

        
    }

int main()
{

	vector<int> numbers = {2,7,11,15};
	int target = 9;
	twoSum(numbers,target);
		


	return 0;
	
}