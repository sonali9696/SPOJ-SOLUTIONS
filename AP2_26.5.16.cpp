#include <cstdio>

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        long long int x,y,s;
        scanf("%lli%lli%lli",&x,&y,&s);
        long long int n = (2*s) / (x+y);
        long long int d = (y-x) / (n-5);
        long long int a = x - 2*d;
        printf("%lli\n",n);
        for(int i=1; i<=n ; i++)
            printf("%lli ",(a + (i-1)*d ));
        printf("\n");    
    }
}