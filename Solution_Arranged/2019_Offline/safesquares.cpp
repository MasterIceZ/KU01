#include<bits/stdc++.h>
using namespace std;

const int MOD = 25621;

int main(){
	int n, m, q;
	scanf("%d %d %d", &n, &m, &q);
	set<int> x, y;
	while(q--){
		int a, b;
		scanf("%d %d", &a, &b);
		x.insert(a);
		y.insert(b);
	}
	int ans = ((n - x.size() + MOD) % MOD * (m - y.size() + MOD) % MOD) % MOD;
	printf("%d", ans);
	return 0;
}
