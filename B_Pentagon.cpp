/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
 // first i learned about the pentagon and problem, then i solved the problem
void phobia(int Shuhashini)
{
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    int dis1 = abs(a - b);
    int dis2 = abs(c - d);
    bool side1 = (dis1 == 1 || dis1 == 4);
    bool side2 = (dis2 == 1 || dis2 == 4);
    if(side1 == side2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
