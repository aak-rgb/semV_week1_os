#include <stdio.h>
int main(){
	int tp, cs, to;
	printf("enter total process(a positive number)-");
	scanf("%d", &tp);
	printf("enter context switch(a positive number)-");
	scanf("%d", &cs);
	to=(tp-1)*cs;
	printf("total overhead is %d-", to);
	return 0;
}
