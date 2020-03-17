#include <cstdio>
double area(double x0, double y0, double x1, double y1, double x2, double y2){
	double a = x0 * y1 + x1 * y2 + x2 * y0 - x0 * y2 - x1 * y0 - x2 * y1;
	if (a < 0.0){
		a = -a;
	}
	return a;
}
int main(){
	double x0 = 0, y0 = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	while (scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &x1, &y1, &x2, &y2) == 6){
		double a = area(x0, y0, x1, y1, x2, y2);
		printf("a=%lf\n", a);
		int count = 0;
		for (int x = 1; x < 100; ++x){
			for (int y = 1; y < 100; ++y){
				double a2 = area(x0, y0, x1, y1, x, y)
					+ area(x0, y0, x, y, x2, y2)
					+ area(x, y, x1, y1, x2, y2);
				if (a > a2 - 1e-9 && a < a2 + 1e-9){
					++count;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}