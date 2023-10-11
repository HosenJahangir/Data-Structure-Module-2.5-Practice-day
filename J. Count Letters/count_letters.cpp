#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    // Ranged loop(easier because as string size unknown)
    for (char c : s)
    {
        int index = c - 97;
        v[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char alphabet = i + 97;
        if (v[i] > 0)
        {
            cout << alphabet << " : " << v[i] << endl;
        }
    }
}