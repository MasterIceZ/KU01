#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, s;
	scanf("%d %d %d", &n, &m, &s);
	vector<vector<int>> v(n + 1, vector<int> (m + 1));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			scanf("%d", &v[i][j]);
			v[i][j] += s * i;
		}
	}
	int cnt = 0;
	for(int j=1; j<=m; ++j){
		for(int i=1; i<=n; ++i){
			cnt += (v[i][j] <= v[i - 1][j]);
			v[i][j] = max(v[i][j], v[i - 1][j]);
		}
	}
	printf("%d\n", n*m-cnt);
	return 0;
}
