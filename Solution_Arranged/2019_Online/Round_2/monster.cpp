#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scang("%d %d", &n, &m);
	vector<int> v(n);
	for(auto &x: v){
		scanf("%d", &x);
	}
	sort(v.begin(), v.end());
	for(int i=1; i<=n; ++i){
		if(v[i] > m){
			printf("%d\n", v[i - 1]);
			return 0;
		}
	}
	printf("%d\n", v.back());
	return 0;
}
