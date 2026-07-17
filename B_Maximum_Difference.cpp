#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int t)
{
    ll n;
    cin >> n;
    vector <ll> vec(n);
    int mx = INT_MIN;
    int mm = INT_MAX;

    for(auto & v : vec)
    {
        cin >> v;
        if(mx < v) mx = v;

        if(mm > v) mm = v;
    }
    ll ans = abs(mx-mm);
    cout << ans << endl;

   
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