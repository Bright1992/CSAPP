#include <stdio.h>

#define POS_INFINITY	0x7F800000
#define NEG_INFINITY	0xFF800000
#define NEG_ZERO		0x80000000
#define NaN 			0x7FFFFFFF
#define pNaN 			0xFFFFFFFF

int main(){
	int pinfi=POS_INFINITY,ninfi=NEG_INFINITY,nzi=NEG_ZERO,nani=NaN,pnani=pNaN;
	float *pinf=(float*)&pinfi, *ninf=(float*)&ninfi,*nz=(float*)&nzi,*nan=(float*)&nani,*pnan=(float*)&pnani;
	printf("%f %f %f %f %f\n",*pinf,*ninf,*nz,*nan,*pnan);
	printf("%lf(double)=%d(integer)\n",1e20,(int)1e20);
	return 0;
}