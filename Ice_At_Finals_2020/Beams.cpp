#include<bits/stdc++.h>
using namespace std;

#define int long long


void solver(){
    int n,m;
    cin >> n >> m;
    vector<int>v(n);
    vector<int>w(m);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    for(auto &x : w){
        cin >> x;
    }
    int cnt = 0;
    cnt = min(n,m);
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(v[i] == w[j] && i%2==j%2){
                cnt++;
            }
        }
    }
    cnt+=1;
    cout << cnt ;
}

int32_t main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solver();

    return 0;
}