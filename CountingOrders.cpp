#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n=0;
    cin>>n;
    int a[n];
    int b[n];
    int c[n]={1};

    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    
    sort(b,b+n);

    int count =0;

    for(int i=n-1,k=0; i>=0; i--,k++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]>b[i])
                count++;
        }
        if(count-k>=0)
            c[k]=count-k;
        else
            c[k]=0;
        count =0;
    }

    int ans=1;
    for(int x=0; x<n; x++)
        ans=ans*c[x];
    
    cout<<ans<<endl;

}

signed main() { 

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