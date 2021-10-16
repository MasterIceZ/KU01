#include<bits/stdc++.h>
using namespace std;

int main(){
	double a, b, r;
	int n, cnt = 0;
	scanf("%d %lf %lf %lf", &n, &a, &b, &r);
	for(int i=1; i<=n; ++i){
		double x, y;
		scanf("%lf %lf", &x, &y);
		cnt += (r * r >= (a - x) * (a - x) + (b - y) * (b - y));
	}
	printf("%d\n", cnt);
	return 0;
}
