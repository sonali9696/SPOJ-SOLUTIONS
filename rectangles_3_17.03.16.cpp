/*
Consider n=1 till n=N
Calculate no. of factors for each n
*/
#include <stdio.h>
#include <math.h>
int noOfFactors(int);
int main()
{
	long long int n;
	scanf("%lli",&n);
	long long int count = 0;
	for(int i=1;i<=n;i++)
	{
		count += noOfFactors(i);
	}
	printf("%lli",count);
}
int noOfFactors(int n)
{
	int c = 0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			c++;
		}
	}
	return c;
}

