/* NSTEPS:spoj id-1112*/
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,x1,x2,y1,y2,n1,n2,c1,c2,f;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		x1=0;y1=0;x2=2;y2=0;c1=0;c2=0;n1=0;n2=2;f=0;//n1=value at (x1,y1);n2=value at (x2,y2)
		if(x==y)
		{
			while(x1!=x && y1!=y)
			{
				if(c1%2==0)
				{
					n1+=1;
				}
				else
				{
					n1+=3;
				}
				c1++;x1++;y1++;
			}
			cout<<n1<<"\n";
		}
		else
		{
			if(x2==x && y2==y)
			{
				cout<<n2<<"\n";
				continue;
			}
			while(x2<x && y2<y)
			{
				if(c2%2==0)
				{
					n2+=1;
				}
				else
				{
					n2+=3;
				}
				c2++;x2++;y2++;
				if(x2==x && y2==y)
				f=1;
			}
			if(f==1)
				cout<<n2<<"\n";
			else
				cout<<"No Number\n";
		}
	}
	return 0;
}
