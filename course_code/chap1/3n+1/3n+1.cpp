#include<iostream>
using namespace std;
long long int count;
long long int cycle(long long int); 
int main()
{
	long long int a,s;
	while(cin>>a>>s)
	{
		long long int big=0,test;
		if(s % 2 == 0)
			s--;
		for(long long int i=s;i>=a;i-=2)
		{
			count=0;
			test = cycle(i);
//			cout<<i<<" "<<count<<endl;
			if(big<count)
				big=count;

		}
		cout<<a<<" "<<s<<" "<<big<<endl;
	}
	
	return 0;
}
long long int cycle(long long int i)
{
	count++;
	if(i==1)
		return 1;
	else if(i % 2 ==0)
		return cycle(i/2);
	else
		return cycle((3*i)+1);
}
