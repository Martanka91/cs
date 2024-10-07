#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void)
{
   int cash = 0;
    int remainder  = 0;
    int quarters = 25;
    int dimes = 10;
    int nickles = 5;
    int pennies = 1;
    int nikl = 0;
    do
    {
    cash = get_int ("Change owed: ");
    }
    while (cash <= 0);
{
       if ( cash >= quarters)
        {

            int a = cash / quarters;
            remainder = cash % quarters;
            int dim = remainder / dimes;
            int rema = remainder % dimes;
            int penny =  rema / pennies;
            int result = a + dim + nikl + penny;
             printf ("%i" ,result);
             printf ("\n");
        }
  }

  {
    if (  cash >= dimes && cash < quarters)
      {int b = cash / dimes;
      remainder = cash % dimes;
      nikl = remainder / nickles; //zbytek / 5
      int rem = remainder % nickles;
      int penny =  rem / pennies;
      int result = b + nikl + penny;
        printf ("%i",result);
        printf ("\n");

  }
  }
    if (cash < 10 && cash >5)
  {
    int c = cash / nickles;
    remainder = cash % nickles;
    int rem = remainder / pennies;
    int result = c + rem;
    printf ("%i", result);
    printf ("\n");


  }
  {
   if ( cash < 5)
    {int d = cash / pennies;
    printf("%i", d);
    printf ("\n");
    }
  }


}


