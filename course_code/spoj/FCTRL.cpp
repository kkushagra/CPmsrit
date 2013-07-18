#include<iostream>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll count=0,n,mul=5;
		cin>>n;
		while((n/mul) > 0)
		{
			count = count + (n/mul);
			mul*=5;
		}

		cout<<count<<endl;
	}
	return 0;
}


