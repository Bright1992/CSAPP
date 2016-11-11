#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct soo{
	int a;
	int *p;
	char c;
	char s[20];
} struct1,*structp;

void foo(int a){
	int b=a+1;
	int c=b+1;
}

int main(){
	int n=1;
	struct1 s1 = {5,&n,'a',"asdfyftyftyftyffffff"};
	s1.s[5]='e';
	structp sp = (structp)malloc(sizeof(structp));
	sp->a=5;
	sp->p=&n;
	sp->c='a';
	foo(n);
	strcpy(sp->s,"asdfafjiorfoifsa");
	return 0;
}