/*C program for finding a preson can vote*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age:");
	scanf("%d",&a);
	a=18-a;
	if(a>18)
	printf("He can vote");
	else
	printf("he vote after %d years",a);
	return 0;
	
}
