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
    cin >> n;
    ll v[n];
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    ll ans =0;
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            ans +=(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    cout<<ans<<nl;
    return 0;
}