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
    int temp; 
    cin >> temp;
    int mx = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        int temp;cin >> temp;
        mx = max(mx,temp);    
    }

    if(mx>temp) cout << mx-temp+1 << endl;
    else if(mx==temp) cout << 1 << endl;
    else cout << 0 << endl;


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