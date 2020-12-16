#include<bits/stdc++.h>
using namespace std;

#define int long long

int mark[77][77];
int dp[77][77];

void solver2(){

}

void solver(){
    int w,l;
    cin >> w >> l;
    if(w < 5 || l < 5){
        solver2();
    }
    for(int i=0;i<w;++i){
        for(int j=0;j<l;++j){
            cin >> mark[i][j];
        }
    }

    int cnt = 0;

    for(int i=0;i<w-4;++i){
        for(int j=0;j<l-4;++j){
            //cout << "Debug :" << i << " " << j << endl;
            set<int>type;
            for(int x=i;x < i+5 ;++x){
                for(int y=j;y<j+5;++y){
                    type.insert(mark[x][y]);
                }
            }
            if(type.size() >=5 ){
                cnt++;
            }
        }
    }
    cout << cnt ;
}
int32_t main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solver();

    return 0;
}