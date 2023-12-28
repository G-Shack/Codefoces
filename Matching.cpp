#include<iostream>
#include<cmath>
using namespace std;


void matching()
{
    string s;
    cin>>s;

    int var=0;

    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='?')
            var++;
    }
    
    if(s[0]=='0')
        cout<<0<<endl;
    else if(s[0]<='9' && s[0]>'0' && var==0)
        cout<<1<<endl;
    else if(s[0]=='?')
        cout<<9*pow(10,var-1)<<endl;
    else
        cout<<pow(10,var)<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        matching();
    }
}