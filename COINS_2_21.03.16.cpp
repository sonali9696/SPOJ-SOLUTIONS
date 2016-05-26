/*we save prev calculated result to avoid tle*/
#include <stdio.h>
#include <map>
using namespace std;
map<long long int,long long int> dp;
long long int coins(long long int n)
{
    if(n == 0) //only case in which dp calc but it is 0
        return 0;
    if(dp[n]!=0) //i.e. already calculated
        return dp[n];
    if((int)(n/2) + (int)(n/3) + (int)(n/4) <= n)
        dp[n] = n;
    else
        dp[n] = coins((int)(n/2)) + coins((int)(n/3)) + coins ((int)(n/4));   
    return dp[n];     
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
