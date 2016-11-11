#include <stdio.h>

int tmult_ok(int x,int y){
	int p=x*y;
	return !x || p/x==y;
}

/**
int tmult_ok_64(long long x,long long y){
	return 1;
}
**/

int main(){
	int x=0x80000000,y=0xFFFFFFFF;
	printf("%d * %d = %d: %s\n",x,y,x*y,tmult_ok(x,y)?"True":"False");
	return 0;
}