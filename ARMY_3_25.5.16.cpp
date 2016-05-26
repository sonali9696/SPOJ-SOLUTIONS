/*Without arrays,sorting*/
#include <cstdio>
#include <limits.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int ng,nm,n;
        scanf("%d%d",&ng,&nm);
        int g_max = INT_MIN;
        int m_max = INT_MIN;
        for(int i=0;i<ng;i++)
        {
            scanf("%d",&n);
            if(n > g_max) g_max = n;
        } 
        for(int i=0;i<nm;i++)
        {
            scanf("%d",&n);
            if(n > m_max) m_max = n;         
        } 
        if(g_max >= m_max) printf("Godzilla\n");
        else if(m_max > g_max) printf("MechaGodzilla\n");
        else printf("uncertain\n");
    }
}