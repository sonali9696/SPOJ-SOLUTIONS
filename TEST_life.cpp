/*TEST-Life,the Universe,and Everything*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	while(true)
	{
		cin>>n;
		if(n==42)
			break;
		else
			cout<<"\n"<<n;
	}
	while(cin>>n)
	{
	}
	return 0;
}
