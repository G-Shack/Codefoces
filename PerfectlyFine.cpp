#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    
    int minu[n];
    string skills[n];

    for(int x=0; x<n; x++)
    {
        cin>>minu[x]>>skills[x];
    }
    int minu1=0;
    int minu2=0;
    int minu3=0;
    int smallMinu1=0;
    int smallMinu2=0;
    int smallMinu3=0;
    for(int x=0; x<n;x++)
    {
        if(skills[x]=="01")
        {
            minu1=minu[x];
            if(smallMinu1>minu1 || smallMinu1==0)
                smallMinu1=minu1;
        }
        else if(skills[x]=="10")
        {
            minu2=minu[x];
            if(smallMinu2>minu2 || smallMinu2==0)
                smallMinu2=minu2;
        }
        else if(skills[x]=="11")
        {
            minu3=minu[x];
            if(smallMinu3>minu3 || smallMinu3==0)
                smallMinu3=minu3;
        }
    }

    if((smallMinu1==0||smallMinu2==0) && smallMinu3==0)
        cout<<-1<<endl;
    else if((smallMinu1==0||smallMinu2==0) && smallMinu3!=0)
        cout<<smallMinu3<<endl;
    else
    {
        if(smallMinu1+smallMinu2>smallMinu3 && smallMinu3!=0)
            cout<<smallMinu3<<endl;
        else
            cout<<smallMinu1+smallMinu2<<endl;

    }
    
}

int main() { 

    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
    int t;
    
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    
    return 0;

}