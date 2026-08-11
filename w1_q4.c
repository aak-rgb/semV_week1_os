#include <stdio.h>
int main(){
	int printers, users, perUser;
	printf("enter printers-");
	scanf("%d", &printers);
	printf("enter users-");
	scanf("%d", &users);
	perUser=printers/users;
	printf("each user gets %d printers\n", perUser);
	printf("Extra printers are %d", printers%users);
	return 0;
}
