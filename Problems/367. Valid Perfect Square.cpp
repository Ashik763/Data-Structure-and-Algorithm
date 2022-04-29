#include<bits/stdc++.h>
using namespace std;


  bool isPerfectSquare(long long int num) {
  	if(num==1){

  		return true;
  	}
  	else if(num <3){
  	//	cout << "false";
  		return false;
  	}
  	else {
		  		if(num%2==0){
		  			long long int num2=num;
		  			while(num>=2){
		  			
		  			num=num/2;
		  			if(num2 > num*num){
			  				while(num2>num*num){
			  					num++;
			  					if(num*num ==num2){
			  					//	cout << "true";
			  						return true;
			  					}

			  				}
			  				//cout << "false";
			  				return false;
			  			}
		  		}
		  		//cout << "false";
		  		return false;
	  		}
  		else{
		  			long long int num2=num;
		  			while(num>=2){
			  			
			  			num=num/2;
			  			if(num2 > num*num){
			  				while(num2>num*num){
			  					num++;
			  					if(num*num ==num2){
			  						//cout << "true";
			  						return true;
			  					}

			  				}
			  				//cout << "false";
			  				return false;
			  			}
			  		}


		  		}
  		
  	}

  	return false;

        
    }

long long int main()
{

	long long int num =43 ;
	cout << isPerfectSquare(num);
		


	return 0;
	
}