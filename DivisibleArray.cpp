#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    int A[n];

    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        A[i]=i+1;
        sum =sum+i+1;
    }

    int numb=sum%n;

    if(numb!=0)
    {
        A[numb-1]=A[numb-1]+numb;
    }
    
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
    
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