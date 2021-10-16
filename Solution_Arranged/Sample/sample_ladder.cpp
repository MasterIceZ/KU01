#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> table(n + 1);
	for(int i=1; i<=n; ++i){
		scanf("%d", &table[i]);
	}
	int now = 0, x;
	for(int i=1; i<=m; ++i){
		scanf("%d", &x);
		now += x;
		if(now >= 0 && now <= n){
			now += table[now];
		}	
	}
	if(now <= 0){
		printf("0");
	}
	else if(now >= n){
		printf("%d", n);
	}
	else{
		printf("%d", now);
	}
	printf("\n");
	return 0;
}
