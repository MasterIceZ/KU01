#include<bits/stdc++.h>
using namespace std;

int qs[3][333], unknown[3][333];
bool ok[666];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		scanf("%d", &qs[0][i]);
		qs[0][i] += qs[0][i - 1];
		unknown[0][i] = unknown[0][i - 1] + (qs[0][i] - qs[0][i - 1] == 0);
		ok[qs[0][i] - qs[0][i - 1]] = true;
	}
	for(int i=1; i<=n; ++i){
		scanf("%d", &qs[1][i]);
		qs[1][i] += qs[1][i - 1];
		unknown[1][i] = unknown[1][i - 1] + (qs[1][i] - qs[1][i - 1] == 0);
		ok[qs[1][i] - qs[1][i - 1]] = true;
	}
	vector<int> dp;
	dp.push_back(0);
	for(int i=2*n; i>=1; --i){
		if(!ok[i]){
			dp.push_back(i + dp.back());
		}
	}
	int ans = 0;
	for(int i=1; i<=n; ++i){
		int have = qs[0][i] + qs[1][n] - qs[1][i - 1];
		int add = dp[unknown[0][i] + unknown[1][n] - unknown[1][i - 1]];
		ans = max(ans, have + add);
	}
	printf("%d\n", ans);
	return 0;
}
