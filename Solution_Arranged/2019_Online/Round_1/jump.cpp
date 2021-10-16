#include<bits/stdc++.h>
using namespace std;

char s[111];
int land[111];

int main(){
	int n;
	scanf("%d", &n);
	scanf(" %s", s);
	bool ok = false;
	for(int i=0; i<n; ++i){
		if(s[i] == '#'){
			land[i] = 1;
			ok = true;
		}
	}
	if(!ok){
		printf("%d\n", n);
	}
	else{
		int ans = 1e9 + 10;
		for(int i=0; i<n; ++i){
			if(land[i]){
				ans = min(max(n - i - 1, i), ans);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
