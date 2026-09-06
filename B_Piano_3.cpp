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
    ll temp;
    char ch;
    bool flagL = false;
    bool flagR = false;
    ll L_last_position = -1;
    ll R_last_position = -1;
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> temp >> ch;
        if(ch == 'L')
        {
            if(flagL == false)
            {
                flagL = true;
                L_last_position = temp;
                continue;
            }
            sum+= abs(temp - L_last_position);
            L_last_position = temp;
        }else
        {
            if(flagR == false)
            {
                flagR = true;
                R_last_position = temp; 
                continue;
            }
            sum+= abs(temp - R_last_position);
            R_last_position = temp; 
        }  

    }
    cout << sum << endl;
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
