/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

bool phobia2(int i,int mx,int mm,ll sum,int k)
{
    if(mx < i) mx = i;
    if(mm > i) mm = i;
    sum +=i;
    if(k <= (sum-(mx+mm)))
     {
        return true;
     }
     else return false;

}

void phobia()
{
    int n,k;
    cin >> n  >> k;
    vector<int> vec(n-1);
    ll sum = 0;
    int mx = INT_MIN;
    int mm = INT_MAX;
    for(auto &x : vec) {
        cin >> x;
        mx = max(mx, x);
        mm = min(mm, x);
        sum+=x;
    }

    if(k <= (sum-(mx+mm)))
     {
        cout << 0 << endl;
        return;
     }

    for(int i = 0; i <= 100; i++)
    {
        if(phobia2(i,mx,mm,sum,k)) 
        {
           cout << i << endl;
           return;
        }
    }
    cout << -1 << endl;
    
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
