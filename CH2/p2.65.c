//assume length of x is 32
#include <stdio.h>

int odd_ones(unsigned x){
	x^=(x>>16);
	x^=(x>>8);
	x^=(x>>4);
	x^=(x>>2);
	x^=(x>>1);
	return !(x&1);
}

int leftmost_one(unsigned x){
	x|=(x>>1);
	x|=(x>>2);
	x|=(x>>4);
	x|=(x>>8);
	x|=(x>>16);
	return x^=(x>>1);
}

int main(){
	int x=0x12345678;
	printf("%x,%x\n",odd_ones(x),leftmost_one(x));
	return 0;
}