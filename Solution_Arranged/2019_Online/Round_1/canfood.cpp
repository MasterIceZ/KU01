#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, cnt = 0;
	scanf("%d", q);
	while(q--){
		scanf("%d %d", &a, &b);
		if(a > 400 || b < 150 || b > 200){
			continue;
		}
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
