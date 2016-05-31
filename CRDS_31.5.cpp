#include <cstdio>

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        long long int n;
        scanf("%lli",&n);
        long long int ans =( (3*n*n + n)/2 ) % 1000007;
        printf("%lli\n",ans);
    }
}