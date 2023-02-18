/* C programming for finding square and cube*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter a number: ");
	scanf("%f",&a);
	b=a*a;
	c=a*a*a;
	printf("the square value is %f",b);
	printf("\nthe cube value is %f",c);
	return 0;
}
