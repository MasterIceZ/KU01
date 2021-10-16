#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n;
	scanf("%d", &n);
	int m = sqrt(n - 1);
	printf("%d", m * 2 - (1 - (n - m % 2) % 2));
	return 0;
}
