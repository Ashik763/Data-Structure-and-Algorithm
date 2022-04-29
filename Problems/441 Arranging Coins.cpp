#include<bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) {
	int  a =n;

		a=sqrt(a);
		//cout << a;
		while(a*((a+1)/2.0) <= n){
			a++;

	}
	return a-1;

 }


 int main()
{

	int n =3;
	cout << arrangeCoins(n);

	return 0;
	
}