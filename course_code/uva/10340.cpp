#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    string s,t;
    while(cin>>s>>t)
    {
        int count=0;
        for(int i=0;i<t.length();i++)
        {

                if(s[count]==t[i])
                {
                    count++;
                }

        }
        if(count==s.length())
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }

    return 0;
}
