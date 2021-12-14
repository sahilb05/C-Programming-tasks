//To find grade
#include<stdio.h>
#include<string.h>
int main()
{
	float per;
	char grade;
	printf("Enter Percentage student");
	scanf("%f",&per);
	if(per>=70)
	grade='A';
	else if(per>=60 && per<70)
	grade='B+';
	else if(per>=45 && per<60)
	grade='B';
	else if(per>=35 && per<45)
	grade='C';
	else
	grade='F';
	printf("Grade is %c,\n",grade);
	return 0;
}
