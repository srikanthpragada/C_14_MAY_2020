// Display net amount to be paid

#include <stdio.h>

void main()
{
  int price, qty, amount, discount, net_amount;

      printf("Enter price : ");
      scanf("%d",&price);

      printf("Enter qty   : ");
      scanf("%d",&qty);

      amount = price * qty;
      discount = 10 / 100  * amount;
      net_amount = amount - discount;

      printf("Net Amount : %d", net_amount);

}
