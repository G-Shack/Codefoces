#include<iostream>
using namespace std;

void chara()
{
    int n,k;
    n=k=0;

    bool flag=0;

    cin>>n>>k;

    int size=0;

    if(n%2==0)
    {
        size = (n/2)+1;
    }else{
        size = (n+1)/2;
    }

    int poss[size];

    int val =0;

    for(int i=0; i<size; i++)
    {
        int j=n-i;
        if(i==0)
        {
            poss[i]=(n*(n-1))/2;
        }else{
            poss[i]=((i*(i-1))/2)+((j*(j-1))/2);
        }
    }

    for(int i=0; i<size; i++)
    {
        int x=0;
        if(poss[i]==k)
        {
            flag=1;
            cout<<"YES\n";
            for(x=0; x<i; x++)
            {
                cout<<"-1 ";
            }
            for(x=i; x<n; x++)
            {
                cout<<"1 ";
            }
            cout<<endl;
        }
    }

    if(flag==0)
    {
        cout<<"NO\n";
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        chara();
    }
    return 0;
}