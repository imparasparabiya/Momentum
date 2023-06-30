#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b,c,d;
  clrscr();
  printf("Enter a Value A =");
  scanf("%d",&a);
  printf("Enter a Value B =");
  scanf("%d",&b);
  printf("Enter a Value C =");
  scanf("%d",&c);
  printf("Enter a Value D =");
  scanf("%d",&d);
    if(a>b)
    {
     if(a>c)
     {
       if(a>d)
       {
	 printf("Your are Value 'A' is Big");
       }
       else
       {
	 printf("Your are Value 'C' is Big");
       }

     }
     else
     {
       if(c>d)
       {
	printf("Your are Value 'C' is Big");
       }
       else
       {
	printf("Your are Value 'D' is Big");
       }

     }

    }
    else
    {
      if(b>c)
      {
	if(b>d)
	{
	printf("Your are Value 'B' is Big");

	}
	else
	{
	 printf("Your are Value 'D' is Big");
	}

      }
      else
      {
	if(c>d)
	{
	 printf("Your are Value 'C' is Big");
	}
	else
	{
	 printf("Your are Value 'D' is Big");
	}

      }

    }




  getch();
}