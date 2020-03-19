#include <cstdio>
int main(){
	int n = 0;
	scanf("%d", &n);
 
	int v = 0;
	for (int i = 0; i <= n - 2; ++i){
		v += i * (n - 2 - i);
	}
	v = n + n * v / 4;
	int e = 0;
	for (int i = 0; i <= n - 2; ++i){
		e += i * (n - 2 - i) + 1;
	}
	e = n + n * e / 2;
 
	printf("%d\n", 1 - v + e);
	return 0;
}