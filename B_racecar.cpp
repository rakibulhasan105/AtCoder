/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;
    while(l < r)
    {
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

void phobia()
{
    int n;
    cin >> n; 
    vector<string> vec(n);
    for(auto &st : vec) cin >> st;
    for(int i = 0; i < n; i++)
    {
        
        for(int j = 0; j <n; j++)
        {
            if(i==j) continue;
            
            if(isPalindrome(vec[i]+vec[j]))
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
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
        phobia();
    }
    return 0; //         Hey, it's like a phobia..
}
