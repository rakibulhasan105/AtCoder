/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
 
void phobia(int Shuhashini)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> visited(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i + 1])
        {
            visited[a[i]] = 1;
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                count++;
            }
        }
    cout << count << endl;
    
    for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                cout << i << " ";
            }
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
