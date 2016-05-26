/*Without STL*/
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        int approaching[n];
        int sidestreet[n];
        int count = 1,no;
        for(int i=n-1;i>=0;i--) scanf("%d",&approaching[i]);     
        int approaching_max  = n-1;
        int sidestreet_top = -1; 
        /*
        1. if front of approaching or top of stack(put condition to check if empty) has required count then pop from apt place
        2. if front of approaching is not popped & sidestreet is not popped then move from approaching to sidestreet 
        3. if approaching is empty, pop from stack. if incorrect order then print no else yes. */
        while(count <= n)
        {
            if(approaching_max >= 0 && approaching[approaching_max] == count)
            {
                count++;
                approaching_max --;
            }
            else if(sidestreet_top != -1 && sidestreet[sidestreet_top] == count)
            {
                count++;
                sidestreet_top --;
            }
            else if(approaching[approaching_max] != count) //and sidestreet has no apt truck to send either(already checked)
                sidestreet[++sidestreet_top] = approaching[approaching_max--];
            else if(approaching_max < 0 && sidestreet[sidestreet_top] != count)
                break;
        }
        if(count <= n) printf("no\n");
        else printf("yes\n"); 
        scanf("%d",&n);
    }
}