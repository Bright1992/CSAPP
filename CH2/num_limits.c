#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(){
	printf("INT_MAX = %d\nINT_MIN = %d\nUINT_MAX = %u -- <limits.h>\n",INT_MAX,INT_MIN,UINT_MAX);
	printf("INT16_MAX = %d\nINT16_MIN = %d\nUINT16_MAX = %u -- <stdint.h>\n",INT16_MAX,INT16_MIN,UINT16_MAX);
	printf("INT64_MAX = %lld\nINT64_MIN = %lld\nUINT64_MAX = %llu -- <stdint.h>\n",INT64_MAX,INT64_MIN,UINT64_MAX);
	return 0;
}