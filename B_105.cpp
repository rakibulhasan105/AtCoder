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
    long long n;
    cin >> n;
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) continue;

        int temp = 0;

        for(int j = 1; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                if(j * j == i) temp += 1;
                else temp += 2;
            }
        }

        if(temp == 8) count++;
    }

    cout << count << endl;
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