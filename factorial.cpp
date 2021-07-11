#include "sicofa.hpp"

int factorial (int n){
	if(n==0){
		return 1;
	} else {
		int pat = 1;
		for (int i=1; i<=n; i++) {
			pat = pat * i;
		}
		return pat;
		}
}

