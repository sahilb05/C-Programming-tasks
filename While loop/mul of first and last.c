//to find the multiplication of first digit and last digit
#include<stdio.h>
int main()
{
  int num,mul,firstdigit,lastdigit;
  printf("enter any number");
  scanf("%d",&num);
  lastdigit=num%10;
  firstdigit=num;
  while(num>=10)
  {
  	num=num/10;
  }
  firstdigit=num;
  mul=firstdigit*lastdigit;
  printf("Multiflication of first and last digit numbers=%d",mul);
  return 0;
}
