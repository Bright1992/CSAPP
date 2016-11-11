#include <stdio.h>
#include <time.h>

int tadd_ok(int x,int y){
	return (x>=0&&y>=0&&(x+y)>=0)|(x<0&&y<0&&(x+y)<0);
}

int main(){
	int a=0;
	switch(a){
		case0: printf("case0\n");
		case 1:printf("case1\n");
	}
	sleep(1);
	goto case0;
}