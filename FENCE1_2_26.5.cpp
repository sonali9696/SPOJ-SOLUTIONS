#include <cstdio>
#include <cmath> //for M_PI
#include <iomanip>
using namespace std;

int main()
{
    int L;
    scanf("%d",&L);
    while(L)
    {
        float area = (L*L) / (2*M_PI);
        printf("%.2f\n",area);
        scanf("%d",&L);
    }
}