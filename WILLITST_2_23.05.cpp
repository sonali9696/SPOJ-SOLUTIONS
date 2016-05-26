/*it terminates if no= 2^n*/
#include <cstdio>
using namespace std;

int main()
{
    long long int n;
    scanf("%lli",&n);
    if(!(n&(n-1))) //for 2^n, n and n-1 are opposite in bits. so there & gives 0
        printf("TAK\n");
    else
        printf("NIE\n");
        
}