#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k, cnt = 0, now = 0;
	scanf("%d %d %d", &n, &m, &k);
	for(int i=1, x; i<=n; ++i){
		scanf("%d", &x);
		now += x;
		if(now < m){
			printf("-1\n");
			return 0;
		}
		now -= m;
		if(k > m){
			now -= k - m;
		}
		if(now < 0){
			now = 0;
			cnt++;
		}
	}	
	printf("%d\n", cnt);
	return 0;
}
