#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
char a[33][33];
bool mark[33][33];
int n,m;

const int di[] = {-1,0,0,1};
const int dj[] = {0,-1,1,0};

void play(int i,int j){
    mark[i][j] = true;
    for(int k=0;k<4;++k){
        int ii = di[k] + i;
        int jj = dj[k] + j;
        if(mark[ii][jj] or ii<0 or jj<0 or ii>=n or jj>=m or a[ii][jj]=='#'){
            continue;
        }
        if(a[ii][jj]=='*'){
            cnt++;
        }
        play(ii,jj);
    }
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<pair<int,int>> v;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> a[i][j];
            if(a[i][j]=='A' or a[i][j]=='W'){
                v.emplace_back(i,j);
            }
        }
    }
    for(auto x : v){
        play(x.first,x.second);
    }
    cout << cnt;
    return 0;
}