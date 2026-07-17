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
    vector<ll> v(n);
    ll mx = INT_MIN;
    ll mn = INT_MAX;
    ll sum = 0;
    for(int i = 0; i <  n; i++)
    {
        cin >> v[i];
        mx = max(mx,v[i]);
        mn = min(mn,v[i]);
        sum += v[i];
    }
    ll temp1 = mx*(mx+1)/2;
    ll temp2 = (mn-1)*mn/2;
    ll ans = temp1 - temp2;
    ll res = ans - sum;
    cout << res << endl;
    

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