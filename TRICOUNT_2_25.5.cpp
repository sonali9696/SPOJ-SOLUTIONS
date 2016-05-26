#include <cstdio>

int main()
{
    long long int T;
    scanf("%lli",&T);
    for(int t=1;t<=T;t++)
    {
        long long int n;
        scanf("%lli",&n);
        long long int ans = n*(n+2)*(2*n + 1);
        ans = ans/8;
        printf("%lli\n",ans);
    }
}