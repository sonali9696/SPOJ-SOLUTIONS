#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char input[110];//101 digits + '\0'
    while(scanf("%s",input)!=EOF)
    {
        scanf("%s",input);
        int len = strlen(input);
        int n[len];//+1 is because of carry
        for(int i=0;i<len;i++)
            n[i] = input[i] - '0';
        if(n[0]<=2 && len == 1) {
            printf("%d\n",n[0]);
            continue;
        }  
        int no,carry=0;
        for(int i=len-1;i>=0;i--)
        {
            no = 2*n[i] + carry;
            carry = no/10;
            n[i] = no % 10;
        } 
        //note: n[0] may store double digit due to carry
        if(carry > 0)
            n[0] = 10*carry+n[0];
        if(n[len-1] >= 2) n[len-1] = n[len-1] - 2;
        else if(n[len-1] == 1 || n[len-1] == 0)
        {
            n[len-1] = 10+n[len-1] - 2;
            int k = len-2;
            while(n[k] == 0 && k>=0)
            {
                n[k] = 9;
                k--;
            }
            if(k>=0) n[k]--;   
        }
        if(n[0] > 0) printf("%d",n[0]);
        for(int i=1;i<len;i++)
            printf("%d",n[i]);
        printf("\n");        
    }
}