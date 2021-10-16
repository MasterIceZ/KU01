#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int dp[1111];

int main(){
	int l, n;
	scanf("%d %d", &l, &n);
	for(int i=1; i<=1000; ++i){
		dp[i] = dp[i - 1] + i;
	}
	int now = l, i = 1;
	while(dp[now] < n){
		now += l;
		++i;
	}
	printf("%d", i);
	return 0;
}
