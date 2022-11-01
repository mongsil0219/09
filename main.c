#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,4,5};
	
	if (a==b)
		printf("같은 값\n");
	else
		printf("다른 값\n");
		
	return 0;
}
