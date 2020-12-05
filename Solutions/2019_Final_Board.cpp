#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,s;
    cin >> n >> m >> s;
    int v[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> v[i][j];
            v[i][j] += s*i;
        }
    }
    int cnt = 0;
    for(int j=0;j<m;++j){
        for(int i=1;i<n;++i){
            if(v[i][j] <= v[i-1][j]){
                cnt++;
            }
            v[i][j] = max(v[i-1][j],v[i][j]);
        }
    }
    cout << n*m-cnt;
    return 0;
}