#include "sicofa.hpp"

int factorial (int n);
double sin (long double x, long double precision){
	while( x>90 || x<-90) {
				if( x > 90){
		  		x -= 180;
				} 
				else {
	        			x += 180;		
			          	}
}
	x=x*M_PI/180;
	long double patas=0;

	for (int i = 0; i<=precision; i++) {
					int k = 2*i + 1;
					patas += pow(-1, i) * pow(x, k) / factorial(k);

	return patas;

	}
}
