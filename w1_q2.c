#include <stdio.h>
int main(){
	int id;
	printf("enter proces ID-");
	scanf("%d", &id);
	if(id<0){
		printf("enter Valid time ");
		return 0;
	}
	if(id%2==0){
		printf("System Process");
	}else{
		printf("User Process");
	}
	return 0;
}
