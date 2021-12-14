//45 fail or pass
#include<stdio.h>
int main()
{
	int p1,p2,p3;
	printf("\nEnter 3 subjects marks");
	scanf("%d%d%d",&p1,&p2,&p3);
	if(p1<45 || p2<45 || p3<45)
	printf("fail");
	else
	printf("pass");
	return 0;
}
