#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "No. of elements? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    // method 1 (normal)
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // method 2 (auto keyword & for loop)
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}