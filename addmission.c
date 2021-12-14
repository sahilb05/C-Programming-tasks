#include<stdio.h>
int main()
{
	int p1,p2,p3,total;
	float perc;
	char gender;
	printf("Enter three paper marks :");
	scanf("%d%d%d",&p1,&p2,&p3);
	printf("Enter gender (F/M): ");
	scanf("%c",&gender);
	total=p1+p2+p3;
	perc=(float)(total/3);
	if(perc>=65 && gender=='F'){
		printf("Addmitted");
	else{
		printf("Not Addmitted");
	}
	
	}
	return 0;
	
}
