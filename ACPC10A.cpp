/*ACPC10A - What’s Next*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	while(1)
	{
		if(a==0 && b==0 && c==0)
			break;
		if( abs(a-b) == abs(c-b) )
		{
			cout<<"AP\t";
			cout<<(c+(c-b))<<"\n";//both increasing and decreasing AP
		}
		else
		{
			cout<<"GP\t";
			cout<<(c*c)/b<<"\n"; //c/b takes care of increasing and decreasing GP(both)
		}
		cin>>a>>b>>c;
	}
	return 0;
}
