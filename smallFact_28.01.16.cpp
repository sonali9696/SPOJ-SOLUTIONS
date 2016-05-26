/*small factorials*/
#include <stdio.h>

int digits[200],pos; //stores 1 digit in 1 cell for fact
void fact(int);
void multiply(int);

int main()
{
	int n,t;
	scanf("%d",&t);
    for(int T=1;T<=t;T++)
	{
		scanf("%d",&n);
        for(int i=0;i<200;i++)
        {
            digits[i] = 0;
        }
        digits[0] = 1; //unit's place
        pos=0;
	
        if(n==0 || n==1)
                printf("1\n");
        else
		      fact(n);
	}
     
    //fact[1] = 1;
	return 0;
}
void fact(int n)
{
    
    for(int i=2;i<=n;i++)
    {
        multiply(i) ; //each digit multiplied with the next no.
    }
    //factorial stored in reverse form in the array
    for(int j=pos;j>=0;j--)
    {
        printf("%d",digits[j]);
    }
    printf("\n");
}
void multiply(int no)
{
    int carry = 0,i=0,temp;
    
    for(int j=0;j<=pos;j++)
    {
       temp = (digits[i]*no + carry) % 10;
       carry = (digits[i]*no + carry) / 10;
       digits[i] = temp;
       i++;
    } //TODO:correct no. of iterations
    while(carry)  //carry still not zero so extra digit
    {
        temp = (digits[i]*no + carry) % 10;
        carry = (digits[i]*no + carry) / 10;
        digits[i] = temp;
        i++;
    }
    pos = i-1; //(length-1) of factorial
    //cout<<"pos="<<pos<<endl;
}
