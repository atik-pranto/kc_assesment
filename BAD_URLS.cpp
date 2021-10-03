#include<iostream>
#include <cstddef>
#include<set>
#include<stack>
#include <deque>
#include<queue>
#include<utility>
#include<vector>
#include<map>
#include<cmath>
#include<cstring>
#include<bitset>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#define  ll  long long
#define ull unsigned long long
#define  sl(a)  scanf("%lld",&a)
#define  si(a)  scanf("%d",&a)
#define mem(n,m) memset(n,m,sizeof(n))
#define PI acos(-1)
#define pb    push_back
#define pf    push_front
#define vll   vector<ll>
#define pll   pair<ll,ll>
#define mp  make_pair
#define vpll vector< pair <ll,ll> >
#define vplpll vector<pair<ll,pair<ll,ll> > >
#define mp make_pair
#define all(v) v.begin(),v.end()
#define S(X) ( (X) * (X) )
#define forab(i, a, b) for(i = a; i <= b; i++)
#define forn(i, n) for(i = 0; i < n; i++)
#define print(a,b) printf("Case %lld: %lld\n",a,b)
using namespace std;
int main()
{
    string s,o;
    cin>>s;
    ll n = s.length();
    ll sl=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='/')
        {
            sl++;
        }
        else
        {
            o+=s[i];
            sl=0;
        }

        if(sl==1)
        {
            o+=s[i];
        }
    }
    cout<<o<<endl;
    return 0;
}
