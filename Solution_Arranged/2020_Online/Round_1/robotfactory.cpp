#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int a, b, c, d, x, y;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d", &x, &y);
	int nax = -1e9;
	for(int i=0; i<=a; ++i){
		for(int j=0; j<=i; ++j){
			int ww = min(j, c);
			int wb = min(i - j, d);
			for(int k=0; k<=b; ++k){
				for(int l=0; l<=k; ++l){
					int bb = min(l, d - wb);
					int bw = min(k - l, c - ww);
					nax = max(nax, min(x, bb + ww) + min(y, wb + bw));
				}
			}
		}
	}
	printf("%d", nax);
	return 0;
}
