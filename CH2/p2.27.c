#include <stdio.h>

int uadd_ok(unsigned x, unsigned y){
	return (x+y>x);
}

int main(){
	printf("%d\n",uadd_ok(1,4));
	printf("%d\n",uadd_ok(0xFFFFFFFF,8));
	return 0;
}