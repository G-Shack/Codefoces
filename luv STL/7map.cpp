#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[2] = "ccc";
    m[3] = "ddd";
    m[0] = "aaa";
    m[1] = "bbb";

    int n;
    string str;
    cin >> n >> str;

    m.insert({n, str});

    for (auto &valMP : m)
    {
        cout << valMP.first << " " << valMP.second << endl;
    }
}