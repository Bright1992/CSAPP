#include <stdio.h>

int fun4(int x,int d,int s){
	int a=d-s;
	int c=a;
	c=c<0?1:0;
	a=a+c;
	c=a+s+1;
	if(c>x){
		d=c-1;
		a=f(x,d,s);
		a*=2;
		return a;
	}
	a=0;
	if(c>=x)
		return a;
	s=c+1;
	a=f(x,d,s);
	a=2*a+1;
	return a;
}

int main(){
	for(int i=0;i<=11;++i)
		printf("%d:%d\n",i,fun4(i,14,0));
	return 0;
}