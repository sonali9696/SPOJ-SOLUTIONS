//execution time: 0.00
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    long long int n;
    while(1)
    {
        scanf("%lli",&n);
        if(n == -1)
            return 0;
        long long int i = 0,total=1;
        while(1)
        {
            total = total + 6*i;
            i++;
            if(total == n) 
            {
                printf("Y\n");
                break;
            }
            else if(total > n)
            {
                printf("N\n");
                break;
            }
        }    
    }
}