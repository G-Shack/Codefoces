#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, p, m, j;
    p = 0;
    int n = 0;
    cin >> n;
    int A[n];
    int zeroCnt = 0;
    for (x = 0; x < n; x++)
    {
        cin >> A[x];
        if (A[x] == 0)
            zeroCnt++;
    }
    while (zeroCnt > 0)
    {
        if (A[p] == 0)
        {
            for (j = p; j < n - 1; j++)
            {

                m = A[j + 1];
                A[j + 1] = 0;
                A[j] = m;
            }
            zeroCnt--;
        }
        else
        {
            p++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main()
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