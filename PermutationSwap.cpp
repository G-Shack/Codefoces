#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    int A[n];
    int B[n];
    for(int x=0; x<n; x++)
    {
        cin>>A[x];
        B[x]=A[x];
    }

    sort(B, B+n);
    int val=0;
    int finalVal=n;
    bool flag=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(A[i]==B[j])
            {
                val=i-j;
                if(val>0 && finalVal>val)
                    finalVal=val;
                
            }
        }
    }

    cout<<finalVal<<endl;
        

    
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