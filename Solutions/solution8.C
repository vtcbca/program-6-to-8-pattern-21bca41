/*write a progrem to print patten
       1
     2 1 2
   3 2 1 2 3

Date:26/01/2022*/

#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,i,k,l;
   clrscr();
   printf("enter the value:");
   scanf("%d",&i);
   for(a=1;a<=i;a++)
   {
       for(b=i;b>i;b--)
       {
	  printf("  ");
       }
       for(k=a;k>=1;k--)
       {
	  printf("%d",k);
       }
       for(l=2;l<=a;l++)
       {
	 printf("%d",l);
       }
     printf("\n");
   }
   getch();
}