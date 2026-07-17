#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    string temp = str1 + str2;
    if (temp == "sickfine")
    {
        cout << 2 << endl;
    }
    else if (temp == "finefine")
    {
        cout << 4 << endl;
    }
    else if (temp == "sicksick")
    {
        cout << 1 << endl;
    }
    else if (temp == "finesick")
    {
        cout << 3 << endl;
    }

    return 0;
}