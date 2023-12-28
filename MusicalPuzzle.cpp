#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    string A;
    int i=0,j=0,k=0,l=0;
    int count = n-1;
    
    cin>>A;
    char first;
    char second;
    for(i=0,j=1; A[j]!='\0'; i++, j++)
    {
        first=A[i];
        second = A[j];
        
        for(k=i+1,l=i+2; A[l]!='\0'; k++,l++)
        {
            if(A[k]==first && A[l]==second)
                count--;
        }

    }
    if(count>0)
        cout<<count<<endl;
    else
        cout<<1<<endl;
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