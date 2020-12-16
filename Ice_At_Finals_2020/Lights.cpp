#include<bits/stdc++.h>
using namespace std;

#define int long long


void solver(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &x : v){
        cin >> x;
    }
    sort(v.begin(),v.end());
    vector<int>s(n);
    s[0] = v[0];
    for(int i=1;i<n;++i){
      s[i] = v[i] + s[i-1];
    }
    int ans = 0;
    for(auto x : s){
        ans += x*2;
    }
    cout << ans;
}

int32_t main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solver();

    return 0;
}