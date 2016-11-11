#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char *getBytes(void *src, size_t length){
	unsigned char *seq = (char*)malloc(length);
	for(int i=0;i<length;++i)
		seq[i]=*(char*)src++;
	return seq;
}

void showBytes(unsigned char *Bytes, size_t length){
	for(int i=0;i<length-1;++i)
		printf("0x%02X ",Bytes[i]);
	printf("0x%02X\n",Bytes[length-1]);
}

int main(){
	int a=0x87654321;
	unsigned char *seq=getBytes(&a,sizeof(a));
	printf("%d(0x%08X) : ",a,a);
	showBytes(seq,sizeof(a));

	const char *s="abcdef";
	unsigned char *seq2=getBytes(s,strlen(s));
	showBytes(seq2,strlen(s));
	return 0;
}