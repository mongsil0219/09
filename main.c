#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int sum;
	int grade[SIZE];
	int i, average;
	
	sum = 0;
	for(i=0;i<SIZE;i++)
	{
		printf("�л� ������ �Է��ϼ���: ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	for(i=0;i<SIZE;i++)
		printf("grade[%d] = %d\n",i, grade[i]);
		
	average = sum / SIZE;
	printf("���� ��� : %d\n", average);
\
		
	return 0;
}
