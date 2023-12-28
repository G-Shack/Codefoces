#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    string s;
    int count=0;
    cin>>s;
    int i=0;
    if(s=="^")
        count++;
    for(i=0; s[i+1]!='\0'; i++)
    {  
        if(s[i]=='_'&&s[i+1]=='_')
        {
            count=count+1;
        }
    }
    if(s[0]=='_')
        count++;
    if(s[i]=='_')
        count++;
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