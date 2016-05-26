/*ONP-Transform the expression
Assumption: Expression is valid*/

#include <stdio.h>
#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	char a[5]={'+','-','*','/','^'}; //list of all operators
	for(int T=1;T<=t;T++)
	{
		std::string n;
		std::string m;
		string ans;
		cin>>m; 		//string not stated as &n as it is itself a pointer to character. (not sure)
		
			n=m;

		stack<char> o; 		//for operators
		int len=n.length();
		for(int i=0;i<len;i++)
		{
			if(n[i]==')')
			{
				char l = o.top();
				o.pop();
				ans += l;
			}
			else if(n[i]==a[0] || n[i]==a[1] || n[i]==a[2] || n[i]==a[3] || n[i]==a[4])
				o.push(n[i]);
			else if(n[i] == '(')
				continue;
			else
				ans+=n[i];
		}
		while(!o.empty())
		{
			char l = o.top();
			o.pop();
			ans += l;
		}
		cout<<ans<<endl;		
	}
}
