#include <bits/stdc++.h>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()

int main(){
    Int a,b,k;
    cin >> a >> b >> k;
    if(b+1-a>2*k){
        for(Int i=a;i<k+a;i++){
            cout << i << endl;
        }
        for(Int i=b-k+1;i<=b;i++){
            cout << i << endl;
        }
    }else{
        for(Int i=a;i<=b;i++){
            cout << i << endl;
        }
    }
}
