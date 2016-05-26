#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float c;
    while(1)
    {
        scanf("%f",&c);
        if(c == 0.00)
            break;
        float total=0.0;
        float i=2.0;
        while(total<c)
        {
            total = total + (float)(1/i);
            //printf("total=%f",total);
            i++;
       } //i=n+2
       int n = i-2;
       printf("%d card(s)\n",n);
    }
    return 0;
}