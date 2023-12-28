#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    int given[n];
    int sorted[n];
    for(int x=0; x<n; x++)
        cin>>given[x];
    for(int x=0; x<n; x++)
        cin>>sorted[x];
    
    int i=0,j=0;
    int startIndex = 0;
    int endIndex=0;
    int finalStartIndex=0;
    int finalEndIndex=0;
    
    while(j<n && i<n-1)
    {
        while(sorted[i]>sorted[i+1])
            i++;
        startIndex=i;
        while(sorted[i]<=sorted[i+1])  
            i++;
        endIndex=i;
        if(startIndex-endIndex<finalStartIndex-finalEndIndex)
        {
            finalStartIndex=startIndex;
            finalEndIndex=endIndex;
        }    
        j++;
    }

    if(finalEndIndex!=n)
        finalEndIndex++;
    
    cout<<finalStartIndex+1<<" "<<finalEndIndex<<endl;
    
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
