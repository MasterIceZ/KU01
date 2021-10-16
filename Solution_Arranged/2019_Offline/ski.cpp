#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, l;
	scanf("%d %d %d", &n, &m, &l);
	while(l--){
		int now = n;
		bool out = false;
		for(int i=1; i<=m; ++i){
			int x;
			scanf("%d", &x);
			if(out){
				continue;
			}
			now += (x == 1 ? 1 : -1);
			if(now < 0 || now > 2 * n){
				out = true;
			}
		}
		if(out){
			printf("0");
		}
		else{
			printf("1");
		}
		printf("\n");
	}
	return 0;
}
