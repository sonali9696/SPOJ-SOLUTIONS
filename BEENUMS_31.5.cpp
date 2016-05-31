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
        float f = (-3 + sqrt(9+12*(n-1)))/6;
        if(floorf(f) == f) printf("Y\n");
        else printf("N\n");
    }
}