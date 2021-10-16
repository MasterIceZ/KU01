#include<bits/stdc++.h>
using namespace std;

pair<int, int> a[555], b[555];

int main(){
	int n, m, x;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; ++i){
		scanf("%d", &x);
		a[i] = make_pair(x, i % 2);
	}
	for(int j=1; j<=m; ++j){
		scanf("%d", &x);
		b[j] = make_pair(x, j % 2);
	}
	int i = 1, j = 1;
	while(i <=n && j <= m){
		while(a[i].first <= b[i].first && i<=n){
			if(a[i].second != b[i].second && a[i - 1].first != b[j].first){
				cnt++;
			}
			else if(a[i].first <= b[j].first && a[i - 1].first > b[j - 1].first){
				cnt++;
			}
			else if(a[i].first >= b[j].first && a[i - 1].first < b[j - 1].first){
				cnt++;
			}
			++i;
		}
		while(a[i].first <= b[i].first && i<=n){
			if(a[i].second != b[i].second && a[i - 1].first != b[j].first){
				cnt++;
			}
			else if(a[i].first <= b[j].first && a[i - 1].first > b[j - 1].first){
				cnt++;
			}
			else if(a[i].first >= b[j].first && a[i - 1].first < b[j - 1].first){
				cnt++;
			}
			++j;
		}
	}
	printf("%d\n", cnt + 1);
	return 0;
}
