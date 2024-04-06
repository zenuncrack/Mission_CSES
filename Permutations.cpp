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
     if (n==2 || n==3){
        cout<<"NO SOLUTION"<<nl;
    }
    else{
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }

    }
    return 0;
}