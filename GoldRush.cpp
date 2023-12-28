#include <bits/stdc++.h>
using namespace std;

bool flag =0;

void solve(){
    int n=0,m=0;
    cin>>n>>m;

    void pileChk(int n, int m);

    pileChk(n,m);

    if(flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
void pileChk(int n, int m)
    {
        while(n<3 || flag!=1)
        {
            int pile1=0;
            int pile2=0;
            if(n%3==0)
            {
                int x = n/3;
                pile1 = 2*x;
                pile2 = x;
                if(pile1==m || pile2==m)
                    flag=1;
            }
        }
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