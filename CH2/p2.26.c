#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t){
	return strlen(s)<strlen(t)?-1:(strlen(s)==strlen(t)?0:1);
}

int main(){
	char *s="Bright";
	char *t="James";
	printf("%d\n",strlonger(t,s));
	printf("%d\n",strlonger(s,t));
	return 0;
}