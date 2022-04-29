#include<bits/stdc++.h>
using namespace std;


 void setZeroes(vector<vector<int>>& matrix) {

 		vector<pair<int,int> > pv;
 		// for(int i=0;i<matrix.size();i++){
   //       		for(int j=0;j<matrix[i].size();j++){
   //       			cout << matrix[i][j] << " " ;
   //       		}
   //       		cout << endl;
   //      }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                	 pv.push_back(make_pair(i,j));
                }
            }
        }
       

        for(int i=0;i<pv.size();i++)
        {
        	int j=pv[i].first,l=0;
        	int k= pv[i].second,m=0;
        	while(l<matrix[j].size()){
        		matrix[j][l]=0;
        		l++;
        	}
        	while(m<matrix.size()){
        		matrix[m][k]=0;
        		m++;
        	}
        }

        //  for(int i=0;i<matrix.size();i++){
        //  		for(int j=0;j<matrix[i].size();j++){
        //  			cout << matrix[i][j] << " " ;
        //  		}
        //  		cout << endl;
        // }
        return ;

        
    }
int main()
{
	vector<vector<int> > matrix={{1,1,1},{1,0,1},{1,1,1}};
	
	//matrix[1] = 7;
	//cout <<  matrix[0] << matrix[1];

	
	setZeroes(matrix);


	return 0;
}