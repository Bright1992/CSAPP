#include <stdio.h>

int main(){
	unsigned x = 0x87654321;
	unsigned xa = x&0xFF;
	unsigned xb = (x&0xFF)|(~(x|0xFF));
	unsigned xc = x|0xFF;
	printf("%08X %08X %08X %08X\n",x,xa,xb,xc);
}

