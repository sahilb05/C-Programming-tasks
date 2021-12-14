#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,total,per;
	char grade;
	printf("Enter marks of students");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;
	per=total/4.0;
	if(per>=90)
	grade='A';
	else if(per>=80)
	grade='B';
	else if(per>=70)
	grade='B';
	else if(per>=60)
	grade='D';
	else if(per>=40)
	grade='E';
	else
	grade='Fail';
	printf("percentage is %f,Grade is %c,\n");
	return 0;
}
