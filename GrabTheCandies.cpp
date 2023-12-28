#include<iostream>
using namespace std;

void candies()
{
    int n;
    int even =0;
    int odd=0;
    cin>>n;
    int *A;
    A = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        if(A[i]%2==0)
            even=even+A[i];
        else
            odd=odd+A[i];
    }
    if(even>odd)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        candies();
    }
    return 0;
}