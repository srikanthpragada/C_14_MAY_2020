
// Print table for the given number

#include <stdio.h>

void main()
{
  int num, i;

     printf("Enter a number :");
     scanf("%d",&num);

     /*
     i = 1;
     while (i <= 10)
     {
       printf("%2d * %2d  = %4d\n",num,i, num * i);
       i ++;
     }
     */

     for(i=1; i <= 10; i ++)
     {
        printf("%2d * %2d  = %4d\n",num,i, num * i);
     }
}
