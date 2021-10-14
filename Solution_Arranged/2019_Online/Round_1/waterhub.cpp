#include<bits/stdc++.h>
using namespace std;

pair<int, int> v[111];

int dist(pair<int,int> a, pair<int, int> b){
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int main(){
	int n, ans = 1e9 + 10;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		scanf("%d %d", &v[i].first, &v[i].second);
	}
	for(int i=1; i<n; ++i){
		for(int j=i+1; j<=n; ++j){
			int now = 0;
			for(int k=1; k<=n; ++k){
				if(i == k || j == k){
					continue;
				}
				else{
					now += min(dist(v[i], v[k]), dist(v[j], v[k]));
				}
			}
			ans = min(ans, now);
		}
	}
	printf("%d\n", ans);
	return 0;
}
