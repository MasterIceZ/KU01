#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> mark(444, 1), v(n);
	for(int i=0; i<n; ++i){
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end(), greater<int>());
	int now = 1, ans = 0;
	for(auto x: v){
		ans += x * now;
		if(--mark[now] == 0){
			mark[now * 2] += 9;
			now++;
		}
	}
	printf("%d", ans);
	return 0;
}
