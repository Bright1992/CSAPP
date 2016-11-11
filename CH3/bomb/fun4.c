#include <stdio.h>
#include <unistd.h>


int fun4(int x,int d,int s){
	int a=d-s;
	int c=a;
	// if(x==d&&d==s)	return -1;
	c=c<0?1:0;
	// printf("c=%d\n",c);
	a=a+c;
	a/=2;
	// sleep(1);
	// printf("a=%d\n",a);
	c=a+s;
	// printf("c=%d\n",c);
	if(c>x){
		// printf("c>x,x=%d,d=%d,s=%d,a=%d\n",x,d,s,a);
		d=c-1;
		a=fun4(x,d,s);
		// if(a==-1)	return -1;
		a*=2;
		return a;
	}
	a=0;
	if(c>=x)
		return a;
	s=c+1;
	a=fun4(x,d,s);

	a=2*a+1;
	return a;
}

int main(){
	// printf("1");
	for(int i=1;i<=14;++i)
		printf("%d:%d\n",i,fun4(i,14,0));
	return 0;
}