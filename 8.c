/* c program for finding student users*/
#include <stdio.h>
int main()
{
  int a,b, studentusers;
  printf("enter no. of total users:");
  scanf("%d",&a);
  printf("enter no of staff users:");
  scanf("%d",&b);
  b=b+42;
  studentusers=a-b;
  printf("the no. of student users are %d",studentusers);
  return 0;
}
