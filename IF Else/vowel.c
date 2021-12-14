//To find the vowel
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any alphabet :");
	ch=getchar();
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		printf("The charecter %c is vowel",ch);
		else
		printf("The character %c is not vowel",ch);
		return 0;
		
	
}
