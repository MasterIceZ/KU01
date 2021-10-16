#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, x, sum = 0, cnt = 0;
	bool ok = false;
	scanf("%d %d", &n, &k);
	vector<int> dp;
	for(int i=1; i<=n; ++i){
		scanf("%d", &x);
		if(x < 0){
			sum += abs(x) + 1;
			ok = true;
		}
		if(x > 0 && ok){
			ok = false;
			dp.push_back(sum);
			sum = 0;
			cnt++;
		}
	}
	dp.push_back(sum);
	int res = 0;
	sort(dp.begin(), dp.end());
	for(int i=0; i<cnt - k; ++i){
		res += dp[i];
	}
	printf("%d\n", res);
	return 0;
}
