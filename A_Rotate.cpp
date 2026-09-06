/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int tc)
{
   char a,b,c;
   cin >> a >> b >> c;
   ll abc = (a - '0') * 100 + (b - '0')*10 + (c - '0');
   ll bca = (b - '0') * 100 + (c - '0')*10 + (a - '0');
   ll cab = (c - '0') * 100 + (a - '0')*10 + (b - '0');

   cout << abc+bca+cab << endl;
   
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
