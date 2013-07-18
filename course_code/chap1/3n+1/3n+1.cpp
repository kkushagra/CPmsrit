#include<iostream>
#define ll long long
using namespace std;
ll count;
int cycle(ll); 
int main()
{
	ll a,s;
	while(cin>>a>>s)
	{
		ll big=0,test;
		ll q,w;
		if(a>s)
		{
			q=s;
			w=a;
		}
		else
		{
			q=a;
			w=s;
		}

		for(ll i=q;i<=w;i++)
		{
			count=0;
			test = cycle(i);
			if(big<count)
				big=count;

		}
		cout<<a<<" "<<s<<" "<<big<<endl;
	}
	
	return 0;
}
int cycle(ll i)
{
	count++;
	if(i==1)
		return 1;
	else if(i % 2 ==0)
		return cycle(i/2);
	else
		return cycle((3*i)+1);
}
