#include<stdio.h>
#include<conio.h>

void main()

{
    char d;//d=Day Name
    clrscr();
    printf("Enter the First Letter The Day = ");
    scanf("%c",&d);
    switch(d)
    {
    case 'M':
	   printf("Day is Monday\n",d);
	   break;
    case 'T':
	   printf("Day is Tuesday\n",d);
	   break;
    case 'W':
	   printf("Day is Wednesday\n",d);
	   break;
    case 't':
	   printf("Day is Thursday\n",d);
	   break;
    case 'F':
	   printf("Day is Friday\n",d);
	   break;
    case 's':
	   printf("Day is Saturday\n",d);
	   break;
    case 'S':
	   printf("Day is Sunday\n",d);
	   break;
    default :
	   printf("invalid Cahracter\n");
	   break;

     }


  getch();
}