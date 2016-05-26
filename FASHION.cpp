/*FASHION - Fashion Shows*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int T=1;T<=t;T++)
	{
		int n;
		cin>>n;
		const int l=n;
		int m[l];//hotness levels of men
		int w[l];//hotness levels of women
		for(int i=0;i<l;i++)
			cin>>m[i];
		for(int i=0;i<l;i++)
			cin>>w[i];
		sort(m,m+l);
		sort(w,w+l);
		int sum=0;
		for(int i=0;i<l;i++)
		{
			sum+=(m[i]*w[i]);
			//cout<<"m[i]*w[i]=\t";
			//cout<<(m[i]*w[i])<<"\n";
		}
		cout<<sum<<"\n";
	}
	return 0;
}