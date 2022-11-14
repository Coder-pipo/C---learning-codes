#include<bits./stdc++.h>

using namespace std;

int divisor(long long n)
{
	int arr[200]={1};

	for(long long i=1;i<=n;i++)
	{
		for(long long j=i;j<=n;j+=i)
		{
			arr[j]++;
		}
	}

     return arr[n];
}

int main()
{
	long long t;
	cin>>t;
	
	while(t--)
	{
		long long num;
		int count=0;
          cin>>num;
          if(num)

		cout<<divisor(num)<<"\n";

	}

	return 0;
}	