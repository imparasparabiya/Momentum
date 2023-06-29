#include<stdio.h>
#include<conio.h>

void main()

{
   int unit,bill,sc,total_bill;
   clrscr();
   printf("Enter your Unit = ");
   scanf("%d",&unit);
   if(unit<=50)
      {
       bill=unit*0.50;
      }
   else if(unit<=150)
      {
       bill=(unit-50)*0.75+25;
      }
   else if(unit<=250)
      {
       bill=(unit-150)*1.20+75;
      }
   else if(unit>=250)
      {
       bill=(unit-250)*1.50+125;
      }
   else
     {
      printf("Plz Enter Right Value");
     }
   sc=bill*20/100;
   printf("Surcharge = %d\n",sc);
   total_bill=bill+sc;
   printf("Total Bill = %d",total_bill);

  getch();

}