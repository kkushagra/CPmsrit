#include <iostream>
#include <stdio.h>

using namespace std;

void place (int);

int board[8][8];
int c[8];
int queens[8];
int maxnum;
void place(int k) 
{

	int i, sum, j;
	if (k == 8) //check for columns visited
	{
    	sum = 0;
   		for (i = 0; i < 8; i++)
      		sum += board[i][queens[i]];
    	if (sum > maxnum)
      		maxnum = sum;
  	}
  	else 
  	{
    	for (i = 0; i < 8; i++) 
    	{
      		if (!c[i]) 
      		{
      			//8 queens algorithm implementation
 				for (j = 0; j < k; j++)
 				{
   					if (((queens[j] + (k - j)) ==  i)||((queens[j] - (k - j)) == i))
     					break;
     			}
 				if (j == k) 
 				{
   					c[i] = 1;
	   				queens[k] = i;
	   				place(k + 1);
	   				c[i] = 0;
 				}
      		}
    	}
  	}
}
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
				cin>>board[i][j];
		}

		for(int i=0;i<8;i++)
		{
			c[i] = 0;
		}
		maxnum = 0; //initialize maxnum to 0
		place(0); //start with the first column
		printf("%5d\n",maxnum);
	}
	return 0;
}