#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int ng,nm;
        scanf("%d%d",&ng,&nm);
        int g_army[ng];
        int m_army[nm];
        for(int i=0;i<ng;i++) scanf("%d",&g_army[i]);
        for(int i=0;i<nm;i++) scanf("%d",&m_army[i]);
        sort(g_army,g_army+ng);
        sort(m_army,m_army+nm);
        int i=0,j=0;
        while(i<ng && j<nm)
        {
            if(g_army[i] == m_army[j]) j++;
            else if(g_army[i] < m_army[j] ) i++;
            else j++;
        } 
        if(i == ng && j < nm) printf("MechaGodzilla\n");
        else if(j == nm && i < ng) printf("Godzilla\n");
        else printf("uncertain\n");
    }
}