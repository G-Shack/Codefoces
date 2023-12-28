#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n=0,k;
    cin>>n>>k;
    int A[n];
    int B[n];
    int C[n];
    for(int x=0; x<n; x++)
    {
        cin>>A[x];
        C[x]=A[x];
    }
    for(int x=0; x<n; x++)
        cin>>B[x];

    sort(A, A+n);
    sort(B, B+n);
    bool flag=0;
    int x=0,y=0;
    for(x=0; x<n; x++)
    {
        flag=0;
        for(y=0; y<n; y++)
        {
            if(A[y]==C[x] && flag==0)
            {
                cout<<B[y]<<" ";
                A[y]=-1000000000;
                flag=1;
            }
        }
    }
    cout<<endl;
    
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