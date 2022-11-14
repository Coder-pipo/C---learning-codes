#include<iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main()
{
	long long A,B,C,D,res1,res2;
	
	cin >> A >> B >> C >> D;
	
	if(B*log(A)>D*log(C))
          cout<<"YES";

     else
          cout<<"NO";
}