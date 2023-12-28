#include <bits/stdc++.h>
using namespace std;

void solve(){
    int finalCandies;
    cin>>finalCandies;

    int count=0;
    int spell = 1;
    

    if(finalCandies%2==0)
        cout<<-1<<endl;
    else{
        if(finalCandies==1 || (finalCandies-1)%4==0)
        {
            spell =1;
            count=((finalCandies-1)/4)+1;
            cout<<count<<endl;
        }
        else if(finalCandies==3 || (finalCandies-3)%4==0)
        {
            spell = 2;
            count=((finalCandies-3)/4)+1;
            cout<<count<<endl;
        }
    }
    while(count)
    {
        cout<<spell<<" ";
        count--;
    }
    if(finalCandies%2!=0)
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