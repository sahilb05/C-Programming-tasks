#include<stdio.h>
int main()
{
	char ch;
	printf("ENter any character :");
	scanf("%c,&ch");
	if(ch>=65 && ch<=90)
	printf("\n %c is upper case",ch);
	else if(ch>=97 && ch<=122)
	printf("\n %c is lower case",ch);
	else if(ch>=48 && ch<=57)
	printf("\n %c is Digit",ch);
	else 
	printf("\n %c is special symbol",ch);
	return 0;
	
}
