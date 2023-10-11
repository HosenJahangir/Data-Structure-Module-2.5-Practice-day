#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // reverse for loop
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    // Two pointers array
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}