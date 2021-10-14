#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, ans = 0, a, b;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		scanf("%d %d", &a, &b);
		ans += (75 * a >= 100 * b ? 5 : 3);
	}
	printf("%d\n", ans);
	return 0;
}
