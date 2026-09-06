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
   int K,M,G;
   cin >> K >> G >> M;
   int glass = 0;
   int mug = 0;
   for (int i = 0; i < K; i++) {

        if (glass == G) {
            glass = 0;
        }
        else if (mug == 0) {
            mug = M;
        }
        else {
            int transfer = min(mug, G - glass);

            glass += transfer;
            mug -= transfer;
        }
    }

    cout << glass << " " << mug << endl;
    
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
