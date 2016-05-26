#include <cstdio>
#include <cstring>

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        long int count = 1;
        long long int n;
        scanf("%lli",&n);
        long long int i=1,j=1;
        while(count != n)
        {
            /*Horizontal*/
            j = j + 1;
            count++; 
            if(count == n)  break;
            /*Down diagonal*/
            while(j != 1) 
            {
                i += 1;
                j -= 1;
                count++;
                if(count == n)  break;                                
            }
            if(count == n) break;
            /*Vertically down*/
            i += 1;
            count++;
            if(count == n)  break;
            /*Up diagonal*/
            while(i != 1)
            {
                i -= 1;
                j += 1;
                count++;
                if(count == n)  break;
            }           
        }
        printf("TERM %lli IS %lli/%lli\n",n,i,j);
    }
}