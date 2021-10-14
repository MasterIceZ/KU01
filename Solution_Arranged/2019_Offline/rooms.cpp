#include<bits/stdc++.h>
using namespace std;

const int di[] = {-1, 0, 0, 1};
const int dj[] = {0, -1, 1, 0};
int n, m, cnt;
char a[33][33];
bool visited[33][33];

void rec(int i, int j){
	visited[i][j] = true;
	for(int k=0; k<4; ++k){
		int ii = di[k] + i, jj = dj[k] + j;
		if(ii < 1 || jj < 1 || ii > n || jj > m){
			continue;
		}
		if(visited[ii][jj] || a[ii][jj] == '#'){
			continue;
		}
		if(a[ii][jj] == '*'){
			cnt++;
		}
		rec(ii, jj);
	}
}

int main(){
	scanf("%d %d", &n, &m);
	vector<pair<int, int>> v;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			scanf("%d", &a[i][j]);
			if(a[i][j] == 'A' || a[i][j] == 'W'){
				v.emplace_back(i, j);
			}
		}
	}
	for(auto x: v){
		rec(x.first, x.second);
	}
	printf("%d\n", cnt);
	return 0;
}
