#include <bits/stdc++.h>
using namespace std;
int binarySearch(const vector<int> &arr, int left, int right, int target)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            left = mid + 1;
            return binarySearch(arr, mid + 1, right, target);
        }
        else
        {
            return binarySearch(arr, left, mid - 1, target);
        }
    }
    return -1;
}
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    // Normal array sorting
    // sort(arrayname,arrayname+size)
    // a,a+n
    for (int i = 0; i < Q; i++)
    {
        int X;
        cin >> X;
        if (binarySearch(A, 0, A.size() - 1, X) >= 0)
        {
            i == Q - 1 ? cout << "found" : cout << "found" << endl;
        }
        else
        {
            i == Q - 1 ? cout << "not found" : cout << "not found" << endl;
        }
    }

    return 0;
}