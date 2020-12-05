#include<set>
#include<iostream>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int>x,y;
    int n,m,q;
    cin >> n >> m >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        x.insert(a);
        y.insert(b);
    }
    const int mod = 25621;
    cout << (((n-x.size())%mod)*((m-y.size())%mod))%mod;
    return 0;
}