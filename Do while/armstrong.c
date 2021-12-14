#include<stdio.h>
int main()
{
	int rev=0,no,rem,nsave;
	printf("Enter number : ");
	scanf("%d",&no);
	nsave=no;
	do
	{
		rem=no%10;
		rev=rev+rem*rem*rem;
		no=no/10;
	}while(no>0);
	if(nsave==rev)
	  printf("%d is armstrong",nsave);
	  else
	  printf("%d is not armstrong",nsave);
	  return 0;
	
}
