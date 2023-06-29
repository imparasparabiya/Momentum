#include<stdio.h>
#include<conio.h>

void main()

{
  int a;
  clrscr();
  printf("Enter a Value = ");
  scanf("%d",&a);
  (a%2==0)?printf("Your Value is Even"):printf("Your Value is Odd");


  getch();
}