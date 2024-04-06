#include <bits/stdc++.h>
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define nl '\n'
#define F first;
#define S second;
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
typedef long double ld;

int main()
{

    flash;
    string s;
    cin >> s;
    ll count = 0;
    char curr;
    ll ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != curr)
        {
            curr = s[i];
            count = 0;
        }
        if (s[i] == curr)
        {
            count++;
        }
        ans = max(ans, count);
    }
    cout << ans << nl;

    return 0;
}