#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int dp[333];

int main(){
	int l, n, a, b;
	scanf("%d %d", &l, &n);
	for(int i=1; i<=n; ++i){
		scanf("%d %d", &a, &b);
		dp[a + 1]++;
		dp[b + 1]--;
	}
	for(int i=1; i<=300; ++i){
		dp[i] += dp[i - 1];
	}
	int nax = -1e9;
	for(int i=1; i<=l; ++i){
		nax = max(dp[i], nax);
	}
	printf("%d", nax);
	return 0;
}
