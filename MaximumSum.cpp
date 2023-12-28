#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n=0;
    int k=0;
    int totalSum=0;
    cin>>n>>k;
    int A[n];
    for(int x=0; x<n; x++)
    {
        cin>>A[x];
        totalSum=totalSum+A[x];
    }   
    
    sort(A,A+n);
    int minSum=0;
    int maxSum=0;
    int totalSum2 = totalSum;
    int p=0;
    int q=n-1;
    int t=k;
    while(t--)
    {
        minSum = A[p]+A[p+1];
        maxSum = A[q];

        if(minSum<maxSum)
        {
            totalSum=totalSum-minSum;
            p=p+2;
        }
        else
        {
            totalSum=totalSum-maxSum;
            q--;
        }
    }
    minSum=0;
    maxSum=0;
    p=0;
    q=n-1;
    while(k--)
    {
        minSum=minSum+A[p]+A[p+1];
        maxSum=maxSum+A[q];
        p=p+2;
        q--;
    }
    if(minSum<maxSum)
        totalSum2=totalSum2-minSum;
    else
        totalSum2=totalSum2-maxSum;
    
    if(totalSum>totalSum2)
        cout<<totalSum<<endl;
    else
        cout<<totalSum2<<endl;
        
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