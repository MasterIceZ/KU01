#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n, l;
	scanf("%d %d", &l, &n);
	int nax = 0;
	for(int i=1; i<=l; ++i){
		nax += i * i;
	}
	if(n == nax){
		printf("0\n");
		return 0;
	}
	for(int i=1; i<=l; ++i){
		n -= i * i;
		if(n <= 0){
			int ans = l - i + 1;
			ans -= (!n);
			printf("%d\n", ans);
			return 0;
		}
	}
	return 0;
}
