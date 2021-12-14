#include<stdio.h>
int main()
{
	int time,distance,speed;
	printf("Enter Time and Distance : ");
	scanf("%d%d",&time,&distance);
	speed=(distance/time);
	printf("The speed is : %d",speed);
	return 0;
}
