#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n * 2];
    int i, j, min = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    min = a[1] - a[0];
    for (i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] < min)
        {
            min = a[i + 1] - a[i];
        }
    }
    for (i = 0, j = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] == min)
        {
            b[j] = a[i];
            b[j + 1] = a[i + 1];
            j = j + 2;
        }
    }
    for (i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
