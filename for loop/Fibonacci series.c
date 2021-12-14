#include<stdio.h>
int main()
{
	int no,f0=0,f1=1,f2=2,i;
	printf("Enter Range: ");
	scanf("%d",&no);
	printf("\n%d\t%d",f0,f1);
	for(i=3;i<=no;++i){
		f2=f0+f1;
		printf("\t%d",f2);
		f0=f1;
		f1=f2;
	}
	
	return 0;
}
