//to fint the sum of first digit and last digit
#include<stdio.h>
int main()
{
  int num,sum,firstdigit,lastdigit;
  printf("enter any number");
  scanf("%d",&num);
  lastdigit=num%10;
  firstdigit=num;
  while(num>=10)
  {
  	num=num/10;
  }
  firstdigit=num;
  sum=firstdigit+lastdigit;
  printf("Sum of first and last digit numbers=%d",sum);
  return 0;
}
