#include<iostream>
using namespace std;

#define int long long

void bunlover()
{
    int n=0;
    int res1=0;
    int res2=0;
    cin>>n;
    res1=n*n;
    res2=(n-4)*2;
    cout<<res1+res2+10<<endl;

}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bunlover();
    }
    return 0;
}