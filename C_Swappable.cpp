/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int t)
{
    ll n;
    cin >> n; 
    unordered_map<long long, long long> freq;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        freq[x]++;
    }

    long long ans = 1LL * n * (n - 1) / 2;

    for (auto &it : freq) {
        long long k = it.second;
        ans -= 1LL * k * (k - 1) / 2;
    }

    cout << ans << '\n'; 
    return;
}
 
int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }
 
    return 0; //                Hey, it's like a phobia..
}
