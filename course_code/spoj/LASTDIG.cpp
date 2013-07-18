#include<iostream>
using namespace std;
int main()
{
	long long int a,b,t,s;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int d[10]={0},i=0,l=0;
		a = a % 10;	
		s = a;	
		l = s % 10;
		do
		{
			d[i++] = l;
			s*=a;
			l = s % 10;
		}while(a!=l);
		if(b==0)
			cout<<1<<endl;
		else if(i==1)
			cout<<d[0]<<endl;
		else
			cout<<d[(b-1) % i]<<endl;
	}
	return 0;
}


