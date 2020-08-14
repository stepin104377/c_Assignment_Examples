#include "prime.h"
#include "stdio.h"

int isprime(int num);

int prime(int number)
{
  int result = isprime(number);
  return result; 
}

int isprime(int num)
{
	int i;
   for(i=2;i<num;i++)
  /* checks prime number */
  if(num%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>num/2)
  return -1;
  else
  return 1;
}
