// Created by ...
#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'

#define vll vector< ll >
#define M 100000
#define MD 1000000007
#define pb push_back
#define rep(i,a,b) for(ll i = a; i <= b; ++i)
#define fo(i,a,b) for(int i = a; i<= b; ++i)
#define pii pair<ll,ll> 
#define vec(a) vector<a >
#define all(a) a.begin(),a.end()
#define se second
#define fi first
#define inf 0xffffffff
#define inchar getchar_unlocked
#define outchar(x) putchar_unlocked(x)
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
using ll = long long;
ll md=MD;

ll exp(ll a,ll b){ll r=1ll;while(b>0){if(b&1){r=r*(a%md);r=(r+md)%md;}b>>=1;a=(a%md)*(a%md);a=(a+md)%md;}return (r+md)%md;}
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll Min(ll a,ll b){if(a<b)return a; return b;}
ll Max(ll a,ll b){if(a>b)return a; return b;}
int32_t main() {
    IOS;

    int t;
    cin>>t;
    while(t--){
        int y,x,ans=0; cin>>x>>y;
        if(x>y)
        {
        	if(x&1)ans=(x-1)*(x-1)+y;
        	else ans=x*x+1-y;
        }
        else
        {
        	if(y&1)ans=y*y+1-x;
        	else ans=(y-1)*(y-1)+x;
        }
        cout<<ans;


        cout<<'\n';
    }
    return 0;
}