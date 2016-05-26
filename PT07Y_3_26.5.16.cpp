/*Conditions:
1. Should be connected.
2. No cycles
3. One node can't form a tree(Zero edges)
NOTE: tree is not necessarily binary tree
Test case: 7 7 2 3 2 7 3 4 3 6 7 1 1 5 2 6
NO*/
#include <cstdio>

int main()
{
    int v,e,flag=0;
    scanf("%d%d",&v,&e);
    int component[v]; //0 represents node-1
    for(int i=0;i<v;i++){
        component[i] = i+1; //all are different    
    } 
    for(int i=0 ; i<e ; i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        if(component[u-1] == component[v-1]) flag = 1;
        else{
            component[u-1] = 0; component[v-1] = 0;
        }
    }
    if(e != v-1 || flag == 1 || e == 0)
    {
        printf("NO\n");
        return 0;
    }
    for(int i=0; i<v; i++)
    {
        if(component[i] != 0) //no isolated node should be there,all nodes in same tree
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}