#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<pair<int, int>> pr;
    cout << "Enter no. of elements: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int first, sec;
        cin >> first >> sec;
        pr.push_back({first, sec});
    }

    // method 1
    vector<pair<int, int>>::iterator it;
    for (it = pr.begin(); it != pr.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // method 2 (auto keyword & for each loop)
    for (auto &p_r : pr)
    {
        cout << p_r.first << " " << p_r.second << endl;
    }
}