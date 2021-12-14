#include<stdio.h>
int main()
{
	int p1,p2,p3,total;
	float perc;
	char gender;
	printf("\nEnter the 3 subjects marks");
	scanf("%d%d%d",&p1,&p2,&p3);
	printf("\nEnter the gender (F/M):");
	scanf("%s",&gender);
	total=p1+p2+p3;
	perc=(total/100)*300;
	if(perc>=62 && gender=='F')
	printf("\nAdmitted");
	else
	printf("Admission cancelled");
	return 0;
}
