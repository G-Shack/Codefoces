#include<iostream>
using namespace std;

#define int long long

void evnod()
{
    int n,k;
    cin>>n>>k;
    if((n%2) == 0)
    {
        cout<<"YES\n";
    }
    else   
    {
        if((k%2)==0)
        {
           cout<<"NO\n"; 
        }
        else
        {
            cout<<"YES\n";
        }
        
    }

}
signed main()
{
    int t;
    cin>>t;
    for(int i=0; i<t;i++)
        evnod();
    return 0;
}