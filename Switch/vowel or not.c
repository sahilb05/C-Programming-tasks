#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter any character");
	ch=getchar();
	switch(ch)
	{
		case'a':printf("%c is a vowel",ch);
		break;
		case'e':printf("%c is a vowel",ch);
		break;
		case'i':printf("%c is a vowel",ch);
		break;
		case'o':printf("%c is a vowel",ch);
		break;
		case'u':printf("%c is a vowel",ch);
		break;
		default:Printf("%c is not vowel",ch);
		break;
		
	}
	return 0;
}
