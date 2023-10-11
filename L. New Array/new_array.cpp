#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> vector1(b, b + n);
    vector<int> vector2(vector1);
    vector2.insert(vector2.end(), a, a + n);
    for (int num : vector2)
    {
        cout << num << " ";
    }

    return 0;
}
