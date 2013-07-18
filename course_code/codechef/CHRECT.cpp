#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		if((m==1 && n == 1)||(m==2&&n==1)||(m==1&&n==2))
			cout<<0<<endl;
		else if(m==1 || n==1 ||k==1)
			cout<<k<<endl;
		else if(k % 2 == 0)
			cout<<(k/2)<<endl;
		else 
			cout<<((k+1)/2)<<endl;
	}
	return 0;
}