#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Way one
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (v[i] + 1 == v[j])
            {
                count++;
            }
        }
    }
    // Way two
    for (int i = 0; i < n; i++)
    {
        auto position = find(v.begin(), v.end(), v[i] + 1);
        if (position != v.end())
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
