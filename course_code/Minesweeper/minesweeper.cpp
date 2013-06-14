#include<iostream>
#include<string>

using namespace std;

int main()
{
	int m,n;
	char a[100][100];
	int count, t=0;

	cin>>m>>n;

	while(m && n)
	{
		if(t!=0)
			cout<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		t++;
		cout<<"Field #"<<t<<":"<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				count = 0;
				if(a[i][j] != '*')
				{
					
					if(a[i-1][j-1]=='*' && i>0 && j>0)
						count++;
					if(a[i-1][j]=='*' && i>0)
						count++;
					if(a[i-1][j+1]=='*' && i>0 && j<(n-1))
						count++;
					if(a[i][j+1]=='*' && j<(n-1))
						count++;
					if(a[i+1][j+1]=='*' && i<(m-1) && j<(n-1))
						count++;
					if(a[i+1][j]=='*' && i<(m-1))
						count++;
					if(a[i+1][j-1]=='*' && i<(m-1)  && j>0)
						count++;
					if(a[i][j-1]=='*' && j>0)
						count++;
					
					cout<<count;
				}
				else 
					cout<<"*";

			}
			cout<<endl;
		}
		cin>>m>>n;
//		cout<<endl;

	}


	return 0;
}
