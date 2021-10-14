#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q, ans = 1e9 + 10;
	scanf("%d", &n, &q);
	while(q--){
		vector<int> v(n + 1);
		int res = 0, last = 0;
		for(int i=1; i<=n; ++i){
			scanf("%d", &x);
			res = max(x - last, res);
			last = x;
		}
		ans = min(ans, res);
	}	
	printf("%d\n", ans);
	return 0;
}
