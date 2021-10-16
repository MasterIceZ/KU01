#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n, m, w, h;
	scanf("%d %d %d %d", &w, &h, &m, &n);
	int last = 0;
	vector<int> x, y;
	for(int i=1, a; i<=m; ++i){
		scanf("%d", &a);
		x.push_back(a - last);
		last = a;
	}
	x.push_back(w - last);
	last = 0;
	for(int i=1, a; i<=n; ++i){
		scanf("%d", &a);
		y.push_back(a - last);
		last = a;
	}
	y.push_back(h - last);
	sort(x.begin(), x.end(), greater<int>());
	sort(y.begin(), y.end(), greater<int>());
	printf("%d %d", x[0] * y[0], max(x[1] * y[0], x[0] * y[1]));
	return 0;
}
