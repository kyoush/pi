#include <stdio.h>
#include <math.h>
#include <time.h>

#define N 10000000

double trapezoid(double, double, double);
double f(double);

int main(void){

	double s, x, y;
	int i;
    clock_t start, end;
    start = clock();

	for( i = 0, s=0 ; i < N ; i++ ){
		x = i * (1.0/N);
		y = (i + 1)*(1.0/N);
		s += trapezoid(f(x), f(y), (1.0/N));
	}

    end = clock();

	printf("N = 10^%d, %.20f\n", (int)log10(N), s);
    printf("%.2f秒かかりました\n",(double)(end-start)/CLOCKS_PER_SEC);

	return 0;

}


/*
int main(void){

	double d;

	d = trapezoid(3.0, 4.0, 2.0);

	printf("%f\n", d);

	return 0;

}
*/

double trapezoid(double a, double b, double c){

	double d;

	d =( a + b ) * c * 0.5;

	return d;

}

double f( double x ){

	double f;

	f = 4/(1 + x*x);

	return f;
}


