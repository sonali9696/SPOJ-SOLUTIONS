/*ADDREV-Adding Reversed Numbers*/
#include<iostream>
using namespace std;
int main()
{
	int n,c,d;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c>>d;
		int rev1=0,rev2=0;
		while(c!=0)
		{
			rev1=rev1*10+(c%10);
			c/=10;
		}
		while(d!=0)
		{
			rev2=rev2*10+(d%10);
			d/=10;
		}
		int rev=rev1+rev2,ans=0;
		while(rev!=0)
		{
			ans=ans*10+(rev%10);
			rev/=10;
		}
		cout<<ans;
		cout<<"\n\n";
	}
	return 0;
}
