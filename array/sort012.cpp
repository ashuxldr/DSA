#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    int a[t], b[t], c = 0;
    for (i = 0; i < t; i++)
        cin >> a[i];
    for (i = 0; i < t; i++)
        if (a[i] == 0)
            b[c++] = a[i];
    for (i = 0; i < t; i++)
        if (a[i] == 1)
            b[c++] = a[i];
    for (i = 0; i < t; i++)
        if (a[i] == 2)
            b[c++] = a[i];
    for (i = 0; i < t; i++)
        cout << b[i];
    return 0;
}