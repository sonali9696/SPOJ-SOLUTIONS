/*Without sorting*/
#include <cstdio>
#include <limits.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int ng,nm;
        scanf("%d%d",&ng,&nm);
        int g_army[ng],m_army[nm];
        int g_max = INT_MIN;
        int m_max = INT_MIN;
        for(int i=0;i<ng;i++)
        {
            scanf("%d",&g_army[i]);
            if(g_army[i] > g_max) g_max = g_army[i];
        } 
        for(int i=0;i<nm;i++)
        {
            scanf("%d",&m_army[i]);
            if(m_army[i] > m_max) m_max = m_army[i];         
        } 
        if(g_max >= m_max) printf("Godzilla\n");
        else if(m_max > g_max) printf("MechaGodzilla\n");
        else printf("uncertain\n");
    }
}