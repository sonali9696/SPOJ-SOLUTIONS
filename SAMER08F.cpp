/*SAMER08F - Feynman*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(1)
	{
		if(n!=0)
		{
			int ans=((n)*(n+1)*(2*n+1))/6;
			cout<<ans<<"\n";
		}
		else if(n==0)
		{
			break;
		}
		cin>>n;
	}
	return 0;
}