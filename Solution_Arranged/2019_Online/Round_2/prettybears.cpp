#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y, cnt = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &x, &y);
		cnt += (x >= 100 && x <= 750 && y >= 80);
	}	
	printf("%d\n", cnt);
	return 0;
}
