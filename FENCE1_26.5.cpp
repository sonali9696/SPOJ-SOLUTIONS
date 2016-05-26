#include <cstdio>
#include <cmath> //for M_PI
#include <iomanip>
using namespace std;

int main()
{
    int L;
    while(scanf("%d",&L))
    {
        if(L == 0) break;
        float area = (L*L) / (2*M_PI);
        printf("%.2f\n",area);
    }
}