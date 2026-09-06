/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0);   ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int Shuhashini)
{
    int n,k,m;
    cin >> n >> k >> m;
    ll sum = 0;
    int temp;
    for(int i =1;i <n;i++)
    {
        cin >> temp;
        sum+=temp;
    }
        if (sum + k < n * m)
            cout << -1 << endl;
        else if (sum >= n * m)
            cout << 0 << endl;
        else
            cout << n * m - sum << endl;     
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
