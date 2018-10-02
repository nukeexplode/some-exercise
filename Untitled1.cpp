#include "stdio.h"
main()
{
   int num;
   scanf("%d",&num);
   switch(num)
   {
       case 1: putchar('A');
    break;
       case 2: putchar('B');
    break;
       case 3: putchar('C');
       break;
       case 4: putchar('D');
       break;
    default:
       putchar('?');
   }
   printf("\n");
}
