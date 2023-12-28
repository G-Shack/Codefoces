#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    bool flag=0;
    bool printed=0;
    if(s.size()<3)
    {
        printed = 1;
        cout<<"NO\n";
    }
    else if(s.size()>=3)
    {
        for(int i=1; i<(s.size())/2; i++)
        {
            if(s[0]!=s[i])
                flag=1;
        }
    }
    if(!printed)
    {
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
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