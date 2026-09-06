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
    vector<int> vec(n);
    for(auto & val : vec) cin >> val;
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        cout << vec[i] << " ";
        if(vec[i] < vec[i+1])
        {
            temp = vec[i]+1;
            while(temp < vec[i+1])
            {
                cout << temp << " ";
                temp++;
            }
        }
        else{
            temp = vec[i]-1;
            while(temp > vec[i+1])
            {
                cout << temp << " ";
                temp--;
            }
        }
    }
    cout << vec[n-1] << endl;
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
