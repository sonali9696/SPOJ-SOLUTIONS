#include <iostream>
#include <string>
using namespace std;
int convert(string s)
{
    int l=s.length(),num=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='m') return -1;
        num=num*10+(s[i]-'0');
    }
    return num;
}
int main()
{
    int t;
    cin>>t;
    for(int T=1;T<=t;T++)
    {
        string s1,s2,s3,s4,s5;
        cin>>s1>>s2>>s3>>s4>>s5;
        int n1=convert(s1);
        int n2=convert(s3);
        int n3=convert(s5);
        if(n1<0) cout<<(n3-n2)<<" + "<<n2<<" = "<<n3<<endl;
        if(n2<0) cout<<n1<<" + "<<(n3-n1)<<" = "<<n3<<endl;
        if(n3<0) cout<<n1<<" + "<<n2<<" = "<<(n1+n2)<<endl;
    }
}