#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    char c;
    cin>>n;
    cin>>c;
    char A[n];
    int x=0;
    for(x=0; x<n; x++)
        cin>>A[x];
    A[x]='\0';
    bool flag = false;
    int i=0;
    for(int i=0; A[i]!='\0'; i++)
    {
        if(flag == false && c > A[i])
        {
            flag =true;
            cout<<c;
        }   
        cout<<A[i]; 
    }
    if(flag == false)
        cout<<c;
    
    cout<<endl;
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