#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    if (n == 1)
        cout << 1 << endl;
    else
    {
        while (n != 1 && n > 0)
        {
            if (n % 2 == 0)
            {
                sum = sum + n;
                n = n / 2;
            }
            else if (n % 2 != 0)
            {
                sum = sum + n;
                n = (n - 1) / 2;
            }
        }
        cout << sum + 1 << endl;
    }
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}