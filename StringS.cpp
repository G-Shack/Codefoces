#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int count=0;
    string A;
    string ori = "codeforces";

    for(int x=0; x<10; x++)
        cin>>A[x];

    for(int x=0; ori[x]!='\0';x++)
    {
        if(A[x]!=ori[x])
            count++;
    }
    cout<<count<<endl;

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