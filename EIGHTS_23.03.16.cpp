//Relate k and the sequence:192,442,692,942
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int T=1;T<=t;T++)
    {
        int k;
        scanf("%d",&k);
        printf("%d\n",192+(k-1)*250);
    }
    return 0;
}