#include <stdio.h>

int main(){
	int a = 0x80000010;
	printf("Left shift of signed integer:\n");
	printf("%08X <<1 %08X -- sign digit was shifted off!!!\n",a,a<<4);
	return 0;
}