//program to calculate power of a number
#include"stdio.h"
#include"conio.h"
void main()
{
 long int exp, base,result;
  double res;
  printf("Enter any number for base=");
  scanf("%ld",&base);
  printf("Enter number for power=");
  scanf("%ld",&exp);
  result=1;
  if (exp>0)
  {
  while(exp !=0)
  {
      result*=base;
      --exp;
  }
  printf("%ld",result);
  }
  else if(exp<0)
  {
     while(exp!=0)
     {
    result*=base;
     ++exp;   
     }
     res=1.0/(float) result;
     printf("%lf",res);
 } 
  else
  {
  result=1;   
  
  printf("%ld",result);
  }
}	