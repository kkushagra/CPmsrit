#include<iostream>
using namespace std;
long int count;
int cycle(long int); 
int main()
{
	long int a,s;
	while(cin>>a>>s)
	{
		long int big=0,test;

		for(long int i=s;i>=a;i--)
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
int cycle(long int i)
{
	count++;
	if(i==1)
		return 1;
	else if(i % 2 ==0)
		return cycle(i/2);
	else
		return cycle((3*i)+1);
}
