#include<stdio.h>
#include<conio.h>

void main()
{
  char ch;
  clrscr();
  printf("Enter Value = ");
  scanf("%c",&ch);
  if(ch>='0' && ch<='9')
     {
     printf("Your Value is Numeric",ch);
     }
  else if(ch>='a' && ch<='z')
     {
      printf("Your Value is Small Alphabet",ch);
     }
  else if(ch>='A' && ch<='Z')
     {
      printf("Your Value is Capital Alphabet",ch);
     }
  else
     {
      printf("Your Value is Special Character");
     }


  getch();
}