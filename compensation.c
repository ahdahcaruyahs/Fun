//Example from book: Let Us C 19th edition. Has been tweaked and modified for beautification and another currency. (See page 99 for original)

#include <stdio.h>
int main()
{
  float otpay;
  int hour, i = 1;
  while (i <= 10) //10 for number of employees
  {
      printf ("\nEnter no. of hours worked: ");
      scanf ("%d", &hour);
      if (hour >= 40){
          otpay = (hour - 40) * 120;
          
      }else{
          otpay = 0;
          
      }printf("\nEmployee Number: %d\nHours: %d Overtime pay: %.2f Dollars\n",i, hour, otpay);
    i++;

    }
  return 0;
}
