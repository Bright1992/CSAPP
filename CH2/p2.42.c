#include <stdio.h>

int div16(int x){
	int bias = (x>>31)&0xF;
	return (x+bias)>>4;
}

int main(){
	int x = -17;
	printf("%d/16 = %d\n",x,div16(x));
	return 0;
}