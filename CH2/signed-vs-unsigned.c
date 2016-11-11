#include <stdio.h>

int main(){
	int a=-100;
	unsigned b=1;
	unsigned c = a+b;
	printf("-100+1 = %u\n",c);
	printf("-100<1 is %s\n",a<b?"True":"False");
	printf("-100-1<1 is %s\n",a-b<b?"True":"False");
	return 0;
}