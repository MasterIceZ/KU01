#include<bits/stdc++.h>
using namespace std;

int tmp[111], a[111][111];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		memset(tmp, 0, sizeof tmp);
		for(int j=1; j<=n; ++j){
			char g;
			scanf(" %c", &g);
			a[i][j] = (g == '.');
			tmp[j] = a[i][j];
		}
		sort(tmp + 1, tmp + n + 1);
		for(int j=1; j<=n; ++j){
			a[i][j] = tmp[j];
		}
	}
	for(int j=1; j<=n; ++j){
		memset(tmp, 0, sizeof tmp);
		for(int i=1; i<=n; ++i){
			tmp[i] = a[i][j];
		}
		sort(tmp + 1, tmp + n + 1, greater<int> ());
		for(int i=1; i<=n; ++i){
			a[i][j] = tmp[i];
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			printf("%c", a[i][j] ? '.' : "#");
		}
		printf("\n");
	}
	return 0;
}
