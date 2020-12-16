#include<bits/stdc++.h>
using namespace std;

#define int long long

int parent[100100];

int find_root(int u){
    if(parent[u] == u){
        return u;
    }
    return parent[u] = find_root(parent[u]);
}

void solver(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<=100000;++i){
        parent[i] = i;
    }
    vector<int>mark(100100);
    for(int i=1;i<=n;++i){
        int l,r;
        cin >> l >> r;
        if(mark[l]!=0 or mark[r]!= 0){
            parent[i] = parent[mark[i]];
        }
        else{
            for(int x=l;x<=r;++x){
                mark[x] = i;
            }
        }
    }
    vector<int>want(m);
    vector<int>pwant(m);
    for(int i=0;i<m;++i){
        cin >> want[i];
        pwant[i] = find_root(want[i]);
    }
    int cnt=0;
    vector<int>ans;
    for(int i=0;i<m;++i){
        if(pwant[i]==pwant[i+1]){
            ans.push_back(pwant[i]);
            cnt++;
            i++;
        }
        else{
            ans.push_back(want[i]);
            cnt++;
        }
    }
    cout << cnt << endl;
    for(auto x : ans){
        cout << x << " ";
    }
}

int32_t main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solver();

    return 0;
}