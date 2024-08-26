
#include <stdio.h>
#include <math.h>

int
main ()
{

  int a[5], num, num1, digit = 0, r, i = 0,rev=0;
  printf ("Enter number: ");
  scanf ("%d", &num);
  num1 = num;
  while (num1 > 0)
	{
	  num1 = num1 / 10;
	  digit++;
	}
  num1 = num;
  while (num1 > 0)
	{
	  r = num % 10;
	  a[i] = r;
	  i++;
	  num1 = num1 / 10;
	}
    for (int i = 0; i < digit; i++) {
        rev=rev+a[i]*pow(10,digit-i-1);
    }
    printf("%d",rev);
  return 0;

}
