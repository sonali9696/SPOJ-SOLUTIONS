/*CANDY - Candy I*/
#include <iostream>
using namespace std;

int main()
{
	int num;
	while(1)
	{
		cin>>num;
		if(num==-1)
			break;
		const int n=num;
		int a[n],sum=0;
		for(int i=0;i<n;i++)
		{	
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%num!=0)
		{
			cout<<"-1\n";
			continue;
		}
		else
		{
			int each=sum/num; //each will have these many candies;
			int moves=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]<each)
					moves+=(each-a[i]);
			}
			cout<<moves<<"\n";
		}
	}
	return 0;
}
