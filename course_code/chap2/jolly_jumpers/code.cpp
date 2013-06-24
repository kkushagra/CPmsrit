#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

	int n; //Number of integers in the sequence
	while(cin>>n)
	{
		int check[3000]={0}; //Array to track successive differences
		int num1,num2; //Two integers for taking inputs		
		cin>>num1; 
		for(int i=1;i<n;i++)
		{
			cin>>num2;
			check[abs(num1-num2)]++;//Increase index of absolute difference by 1 to indicate the difference is present in the sequence
			num1 = num2;//Remember the num2 value for next successive difference
		}
		int flag = 0;// A flag parameter
		for(int i=1;i<n;i++)
		{
			if(check[i]!=1)//Check whether the successive difference lies in the range 1 to n-1
			{
				flag = 1;
				break;
			}

		}
		if(flag == 0)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	}
	return 0;
}
