#include <stdio.h>
long long int coins(long long int n)
{
    if((int)(n/2) + (int)(n/3) + (int)(n/4) <= n)
        return n;
    else
        return coins((int)(n/2)) + coins((int)(n/3)) + coins ((int)(n/4));        
}
int main()
{
    int count=1;
    long long int n;
    while(scanf("%lli",&n) && count<=10) //count as ATQ:"not more than 10 inputs"
    {
        printf("%lli\n",coins(n));
        count++;
    }
}
