
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // nESTED LOOOP DIYE KORA JABE.
    vector<long long int> prefixSum(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + A[i - 1];
    }

    for (int i = 0; i < Q; i++)
    {
        int L, R;
        cin >> L >> R;

        long long sum = prefixSum[R] - prefixSum[L - 1];
        cout << sum << endl;
    }

    return 0;
}
