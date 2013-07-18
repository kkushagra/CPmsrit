#include<iostream>

using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		long long int s,r=0,a,ar=0,ans = 0;
		cin>>s>>a;
//		cout<<s<<endl;
 		while(s>0)
		{
			r= (r*10) +  (s % 10);
			s=s/10;
			
		}
		while(a>0)
		{
			ar = (ar*10) + (a%10);
			a=a/10;
		}
//		cout<<r<<" "<<a<<endl;
		r = r + ar;
	
		while(r>0)
		{
			//cout<<(r%10);
			ans = (ans*10) + (r%10);
			r= r/10;
		}
		cout<<ans<<endl;
	}
	return 0;
}


