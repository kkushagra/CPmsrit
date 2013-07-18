#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		string s;
		stack <char> opr;

		cin>>s;

		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
				continue;
			else if(s[i]==')')
			{
				cout<<opr.top();
				opr.pop();
			}
			else if(s[i]>96)
				cout<<s[i];
			else
				opr.push(s[i]);
		}
		cout<<endl;
	}
	return 0;

}


