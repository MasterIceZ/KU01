#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for(auto &x: v){
		cin >> x;
	}
	int cnt = 0;
	for(int i=0; i<n; ++i){
		if(i == 0){
			cnt += (v[i + 1] < v[i]);
		}
		else if(i == n - 1){
			cnt += (v[i] > v[i - 1]);
		}
		else{
			cnt += (v[i - 1] < v[i] && v[i] > v[i + 1]);
		}
	}
	printf("%d", cnt);
	return 0;
}
