#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char *getBytes(void *src, size_t length){
	unsigned char *seq = (char*)malloc(length);
	for(int i=0;i<length;++i)
		seq[i]=*(char*)src++;
	return seq;
}

int main(){
	int a=-345;
	unsigned char *seq=getBytes(&a,sizeof(a));
	printf("%d = ",a);
	for(int i=0;i<sizeof(a)-1;++i){
		printf("%02x ",seq[i]);
	}
	printf("%02x\n",seq[sizeof(a)]);
	return 0;
}