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
    vector<ll> visited(n+1,false);
    bool flag = true;
    for(int i = 0; i <  n; i++)
    {
        cin >> v[i];
        if(v[i] < 1 || v[i] > n || visited[v[i]])
        {
            flag = false;
        }
        visited[v[i]] = true;
    }
    if(flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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