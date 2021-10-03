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
    string s,i,o,ss,ls;
    cin>>s>>i;
    ll n = s.length();
    ll l = i.length();
    ll mal,mil;

    if(n<=l)
    {
        ss = s;
        ls = i;
        mil = n;
        mal = l;
    }
    else
    {
        ss = i;
        ls = s;
        mil = l;
        mal = n;

    }

    ll a,b,re=0,su,ad,di = mal-mil;

    for(ll i=mil-1;i>=0;i--)
    {
       a = ss[i] - '0';
       b = ls[i+di] - '0';
       ad = a+b+re;
       su = ad%10;
       re = ad/10;
       o+=(su+'0');
    }

    if(mal!=mil)
    {
        for(ll i=di-1;i>=0;i--)
        {
            a = ls[i] - '0';
            ad = a+re;
            su = ad %10;
            re = ad/10;
            o+=(su+'0');
        }
    }

    if(re!=0)
    {
        o+=(re+'0');
    }

    for (int i=o.length()-1; i>=0; i--)
      cout << o[i];

    return 0;
}
