#include<iostream>
using namespace std;

int main()
{
	double sum = 0;
	//int num = 22/7;
	//int mod = 22 % 7;
	//short int pi[1000000];
	//pi[0]=num;
	int flag = 0;
	for(int i=1;i<10000000;i+=2)
	{
		if(flag == 0)
		{
			sum +=double (1/double(i)); 
			flag = 1;
		}
		else
		{
			sum -=double(1/double(i));
			flag = 0;
		}
			/*
		//if(mod != 0)
		
			num = mod * 10;
			pi[i] = num/7;
			mod = num % 7;
		
		*/
		
	}
	//cout<<pi[i]<<".";
	//for(int i=1;i<1000;i++)
		//cout<<pi[i];
	cout<<sum*4;
	return 0;

}


