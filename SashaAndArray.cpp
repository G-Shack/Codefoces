#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;
    int A[n];
    for (int x = 0; x < n; x++)
        cin >> A[x];

    sort(A, A + n);

    int sum = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        sum = sum + (A[j] - A[i]);
        i++;
        j--;
    }
    cout << sum << endl;
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