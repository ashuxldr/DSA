#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, sum = 0, c = 0;
    int a[N];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
            ++c;
        else
            sum = sum + a[i];
    }
    cin >> M;

    if (a[N - 1] == -1)
    {
        cout << -1;
        return 0;
    }
    c = M - c;
    sort(a + 1, a + N - 1);
    int l = N - 1;
    for (int i = 0; i < c; i++)
    {
        sum = sum - a[l--];
    }
    cout << sum;

    return 0;
}
