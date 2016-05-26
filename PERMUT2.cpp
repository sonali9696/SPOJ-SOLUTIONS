/*Ambiguous Permutation*/
#include <cstdio>

int main()
{
    while(1)
    {
        long long int n;
        scanf("%lli",&n);
        if(n == 0)
            break;    
        int nos[n+1];
        nos[0] = 0;
        int used[n+1];/*Part of ambiguous permutation or not*/
        used[0] = 0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&nos[i]);
            used[i] = 0;
        }
        int count = 0;
        int flag= 0;/*if no. is not ambiguous,flag=1*/
        for(int i=1;i<=n;i++)
        {
            if(count == n) break;
            if(nos[i] == i)
            {
                used[i] = 1;
                count++;
                continue;
            }
            if( nos[ nos[i] ] == i && used[i] == 0)
            {
                count++;
                used[i] = 1;
                used[nos[nos[i]]] = 1;
            } 
            else if(used[i] == 1)
                continue;
            else if(nos[nos[i]] != i)
            {
                flag = 1;
                break;
            }    
        }
        if(flag == 1)
            printf("not ambiguous\n");
        else
            printf("ambiguous\n");        
    }
}