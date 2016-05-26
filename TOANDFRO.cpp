/*TOANDFRO - To and Fro*/

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	int c;
	string t;
	cin>>c;
	if(c==0) 
		exit(1);
	cin>>t;
	const int n=c;
	
	while(1)
	{
		int l=t.size(),r=l/c;

		const int row=r;
		const int col=c;
		char a[row][col];	
	
		int k=0,count;
		for(int i=0;i<row;i++)
		{
			if(i%2!=0)
				count=c-1;

			for(int j=0;j<col;j++)
			{
				if(i%2==0)//left to right copy
				{
					a[i][j]=t[k];
				}
				else
				{
					a[i][count]=t[k];
					count--;
				}
				k++;
			}
		}		
		
		for(int j=0;j<col;j++)
		{
			for(int i=0;i<row;i++)
			{
				cout<<a[i][j];
			}
		}
		cout<<"\n";
				
		cin>>c;
		if(c==0)
			break;
		cin>>t;
	}
	return 0;
}
