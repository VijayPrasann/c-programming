/*c program for calculating using switch case functions  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n;
    int choice;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of x & n: ");
    scanf("%d %d",&x,&n);
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1	:
        printf("add(x,n): %d",x+n);
        break;
    case 2	:
        printf("sun(x,n): %d",x-n);
        break;
    case 3	:
        printf("Mul(x,n): %d",x*n);
        break;
    case 4	:
        printf("Div(x,n): %d",x/n);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}
