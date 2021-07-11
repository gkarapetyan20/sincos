#include "sicofa.hpp"

int factorial (int n);
double cos (long double x, long double precision){
	while(x > 180 || x < 0) {
				if( x > 180) {
						x -= 180;
						x*= -1;
						} else {
							x += 180;
							x *= -1;
							}
	}
	x=x*M_PI/180;
	long double patas=1;
	for (int i = 1; i<=precision; i++) {
		int k = 2*i;
		patas += pow(-1, i) * pow(x, k) / factorial(k);
	}
	return patas;
}
