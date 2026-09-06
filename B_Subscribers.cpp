/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int hey)
{
    ll n;
    cin >> n;

    if(n <= 999) cout << n << '\n';

    else if(n <= 9999)
        cout << (n / 10) * 10 << '\n';

    else if(n <= 99999)
        cout << (n / 100) * 100 << '\n';

    else if(n <= 999999)
        cout << (n / 1000) * 1000 << '\n';

    else if(n <= 9999999)
        cout << (n / 10000) * 10000 << '\n';

    else if(n <= 99999999)
        cout << (n / 100000) * 100000 << '\n';

    else
        cout << (n / 1000000) * 1000000 << '\n';

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
