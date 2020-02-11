#include<stdio.h>
#include<stdlib.h>
int main() {
	char old[20], new[20];
	scanf("%s",old);
	scanf("%s",new);
	if (rename(old, new)) {

		printf("rename file failed \n");
		exit(1);
	}
	else
	{
		printf("rename file succeed!\n");
		
	}
	


	return 0;
}