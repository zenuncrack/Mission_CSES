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
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        ll x;
        cin>>x;
        sum+=x;
    }

    cout<<(n*(n+1)/2)-sum<<nl;
    
    return 0;
}