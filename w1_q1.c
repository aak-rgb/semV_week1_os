#include <stdio.h>
int main(){
	int sec;
	int hr, min;
	printf("enter CPU burst time-");
	scanf("%d", &sec);
	if(sec<0){
		printf("enter Valid time ");
		return 0;
	}
	hr=sec/(60*60);
	min=(sec%(60*60))/60;
	sec=sec%60;
	printf("%d hours %d minutes %d seconds", hr, min, sec);
	return 0;
}

