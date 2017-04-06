// OB3LISK's C++ template for Google Code Jam.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <cstdio>
#include <queue>

using namespace std;
typedef long long ll;
typedef long double ld;

// Do all the work for the code jam problem here.
// Write the answer to a test case.
void solve()
    {

    }

// Program begins here. Handles writing "Case #: "
int main()
    {
    // Handle reading and writing to file.
    freopen("A-small-practice.in", "r", stdin);
    //freopen("A-large-practice.in", "r", stdin);
    freopen("A.out", "w", stdout);

    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++)
        {
        cout << "Case #" << t << ": ";
        solve();
        if(t != tt) { cout << "\n"; }
        }
    return 0;
    }
