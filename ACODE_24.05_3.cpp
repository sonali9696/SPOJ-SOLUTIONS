#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    while(1)
    {
        char n[5001];
        scanf("%s",n); 
        if(n[0] == '0')
        {
            break;
        }
        int len = strlen(n);
        long long int dp[len+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=len;i++)
        {
            dp[i] = 0;
            if(n[i-2] == '1' || (n[i-2] == '2' and (int)(n[i-1]-'0') <= 6))//double digit
                dp[i] += dp[i-2];
            if(n[i-1] != '0')
                dp[i] += dp[i-1];  
        }  
        printf("%lli\n",dp[len]);  
    }
}