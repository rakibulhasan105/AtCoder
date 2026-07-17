#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    if (a > t)
    {
        cout << 0 << endl;
    }
    else
    {
        int count = 0;
        while (t >= a)
        {
            count += b;
            t -= a;
        }

        cout << count << endl;
    }

    return 0;
}
