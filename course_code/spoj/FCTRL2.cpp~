#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int fact[200];
		int n,len;
		ll prod;
		cin>>n;
		fact[0]=1;
		len =0;

		for(;n>=2;n--)
		{
			prod = 0;
			for(int k = 0;k<=len;k++)
			{
				prod = (fact[k]*n) + prod;
				fact[k]=prod % 10;
				prod = prod/10;
			}
			while(prod>0)
			{
				fact[++len]= prod % 10;
				prod=prod/10;
			}
		
		}
		for(int i=len;i>=0;i--)
			cout<<fact[i];
		cout<<endl;
	}
	return 0;
}


