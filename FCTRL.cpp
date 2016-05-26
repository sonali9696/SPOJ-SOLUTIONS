/*FCTRL-Q.11
5(*2): 1 zero
5^2(*2^2) : 2 zeroes
and so on
10(*1): 1 zero
10^2: 2 zeroes*/

#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int t; //no. of test cases
	scanf("%d",&t);
	int n,ans;
	for(int i=1;i<=t;i++)
	{
		// 5^2=25 i.e.2 digit so number should be atleast 2 digit
		//i.e. a 3 digit no. wont be divisible by 5^4. so check till 5^3
		scanf("%d",&n);
		int e=0,f=0,g;
		int pwr=2;//power
		while(f==0)
		{
			g=n/5;
			//h=n/10; as multiple of 10 is already multiple of 5					
			if(n>=pow(5,pwr))
				e=e+n/(pow(5,pwr));//as if n=100. 100/25=4. i.e. extra zero due to 25,50,75,100
			else
				f=1;
			//if(n>=pow(10,pwr))
			//	f=f+n/(pow(10,pwr));
			pwr++;				
		}
				
		ans=e+g;
		printf("%d\n",ans);
		
	}
}

