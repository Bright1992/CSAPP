#include <stdio.h>

int main(){
	long long l=0x8000000000000000;
	int a = l;
	printf("Signed truncation: rip off high order digit, including sign bit\n");
	printf("l=%016llX, a=%08X\n",l,a);
	return 0;
}