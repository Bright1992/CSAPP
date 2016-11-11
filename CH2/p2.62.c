#include <stdio.h>

int int_shifts_are_arithmetic(){
	return (-1>>1)<0;
}

int main(){
	printf("%d\n",int_shifts_are_arithmetic());
	return 0;
}