#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int dp[100001];
int n;


int main(){
    ios::sync_with_stdio(false);
    cin >> n;

    ll res=n;
    REP(i,n+1){
        ll ans=0;
        int t=i;
        while(t>0)ans+=t%6,t/=6;
        t=n-i;
        while(t>0)ans+=t%9,t/=9;
        res=min(ans,res);
    }
    cout << res << endl;
}
