#include<iostream>

using namespace std;

int main()
{
	long long int b[4],g[4],c[4];
	while(cin>>b[1]>>g[1]>>c[1]>>b[2]>>g[2]>>c[2]>>b[3]>>g[3]>>c[3])
	{
		
	
		char *ans = {"BCG"};
		int min = b[2]+b[3]+c[1]+c[3]+g[1]+g[2],check;
		
		check = b[2]+b[3]+g[1]+g[3]+c[1]+c[2];
		if(check < min)
		{
			min = check;
			ans = "BGC";
		}
		check = c[2]+c[3]+b[1]+b[3]+g[1]+g[2];
		if(check < min)
		{
			min = check;
			ans = "CBG";
		}
		check =  c[2]+c[3]+g[1]+g[3]+b[1]+b[2];
		if(check < min)
		{
			min = check;
			ans = "CGB";
		}
		check =  g[2]+g[3]+b[1]+b[3]+c[1]+c[2];
		if(check < min)
		{
			min = check;
			ans = "GBC";
		}
		check = g[2]+g[3]+c[1]+c[3]+b[1]+b[2];
		if(check < min)
		{
			min = check;
			ans = "GCB";
		}
		cout<<ans<<" "<<min<<endl;
		
	}

	return 0;
}

