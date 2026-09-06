/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{
    int n;
    cin >> n;
    int mx = INT_MIN;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        mx = max(mx, x);
    }

    if (mx == v[0])
    {
        
        for(int i = 1; i < n; i++)
        {
            if(v[i] == mx)
            {
                cout << 1 << endl;
                return;
            }
        }
            cout << 0 << endl;
    }
    else
        cout << mx - v[0] + 1 << endl;

    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}
