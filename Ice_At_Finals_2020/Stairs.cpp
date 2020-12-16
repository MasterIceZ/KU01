#include<bits/stdc++.h>
using namespace std;

#define int long long


void solver(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    vector<int>human(100100);
    vector<int>ghost(100100);
    int now;
    for(int i=1;i<n;++i){
        now = v[i-1];
        int stair = abs(v[i]-v[i-1])-1;
        if(v[i] > v[i-1]){
            for(int k=1;k<=stair;++k){
                if((now+k)%2==0){
                    ghost[now+k]++;
                }
                else{
                    human[now+k]++;
                }
            }
        }
        else{
            for(int k=1;k<=stair;++k){
                if((now-k)%2==0){
                    ghost[now-k]++;
                }
                else{
                    human[now-k]++;
                }
            }
        }
    }
    /*
    cout << endl;
    for(int i=1;i<10;i+=2){
        cout << human[i] << " " << ghost[i+1] << " ";
    }
    cout << endl;
    */
    
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        int ans1=0,ans2=0;
        
        for(int i=l;i<=r;++i){
            ans1+=ghost[i];
            ans2+=human[i];
        }
        
        cout << ans1 << " " << ans2 << "\n";
    }
}

int32_t main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solver();

    return 0;
}