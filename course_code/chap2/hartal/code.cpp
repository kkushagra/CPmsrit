#include<iostream>

using namespace std;

int main()
{
	int t; //Test cases
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int p; // Number of Political Parties
		cin>>p;
		int sim[3650]={0};//Array denoting Days for simulation
		while(p--)
		{
			int h; //hartal parameter
			cin>>h;
			for(int i=h;i<=n;i+=h)
			{
				if((i % 7 == 0)||(i % 7 == 6))
					continue;
				else
					sim[i] = 1;

			}
		}
		int sum = 0;
		for(int i=1;i<=n;i++)
		{
			if(sim[i]==1)
				sum++;
		}
		cout<<sum<<endl;




	}



	return 0;
}
