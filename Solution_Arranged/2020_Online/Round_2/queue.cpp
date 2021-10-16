#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int l, n, nax = 0;
	scanf("%d %d", &l, &n);
	vector<int> ans(1 + l), h(1 + l);
	for(int i=1; i<=l; ++i){
		scanf("%d", &h[i]);
		ans[i] = max(0, nax - h[i]);
		nax = max(nax, h[i] + 1);
	}
	while(n--){
		scanf("%d", &l);
		printf("%d\n", ans[l]);
	}
	return 0;
}
