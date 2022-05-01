#include<bits/stdc++.h>
using namespace std;
// int countPrefixes(vector<string>& words, string s) {
        
//     }


 int main()
{

	vector<int> arr ={1,2,3,11};
	int k = 100;
	vector<int> arr2 ;
	
	int len = arr.size();
	for(int i = 0,j=1;i<len+k;i++){
		if(i<len){
			while(arr[i] != j){
				arr2.push_back(j);
				j++;
				
				if(arr2.size()==k){
					cout << arr2[k-1] ;
					return arr2[k-1];
				} 

			}
		}
			
			j++;
			if(arr2.size()==k){
				cout << arr2[k-1] ;

				return arr2[k-1];
			} 
	}

	cout << arr[arr.size()-1]+(k-arr2.size());
	return arr[arr.size()-1]+(k-arr2.size());



}