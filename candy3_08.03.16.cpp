#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        long long int n; //no.of children
        scanf("%lld",&n);
        long long int total=0; //since total can become too huge.
        //so each time new candy is taken,distribute it and store remaining in total
        for(int i=1;i<=n;i++)
        {
            long long int a;
            scanf("%lld",&a);
            total = (total+a)%n;
        }
        if(total % n == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}