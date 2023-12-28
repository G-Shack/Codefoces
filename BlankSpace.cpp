#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    bool A[n];
    for(int x=0; x<n; x++)
    {
        cin>>A[x];
    }
    int prevCount=0;
    int count=0;
    bool flag=0;

    for(int x=0; x<n; x++)
    {
        if(A[x]==0)
        {
            count+=1;
            if(prevCount<count)
                prevCount=count;
        }
        else if(A[x]==1)
        {
            count =0;
        }
    }
    cout<<prevCount<<endl;
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