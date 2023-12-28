#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v(5, -1);
    printVect(v);

    int temp;
    cin >> temp;

    v.push_back(temp);
    printVect(v);

    v.pop_back();
    v.pop_back();
    printVect(v);
}