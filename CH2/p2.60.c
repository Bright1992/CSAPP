#include <stdio.h>

int is_big_endian(){
	int x=0x007F;
	return (unsigned)(*((char*)&x))==0;
}

unsigned replace_byte(unsigned x,int i,unsigned char b){
	unsigned mask=0xFF<<(i*8);
	mask^=0x00;
	return (x & ~mask) | (b<<i*8);
}

int main(){
	int x=0x12345678;
	int y=replace_byte(x,2,0xAB);
	printf("%x,%x\n",x,y);
	return 0;
}