/*
1*1,1*2,1*3....1*n => n rectangles
2*2,2*3,2*4....2*n/2 => n/2-1 rect.
3*3,3*4...3*n/3   => n/3-2 rect
.
.
. till sqrt(n)*sqrt(n)
*/
#include <stdio.h>
#include <math.h>

int main()
{
	long long int n;
	long long int count = 0;
	scanf("%lli",&n);
	for(int i = 1;i<=sqrt(n);i++)
	{
		int val = (int)(n/i) - (i-1);
		if(val<=0)
			break;
		count += val;
	}
	printf("%lli",count);
	return 0;	
}
