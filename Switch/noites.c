#include<stdio.h>
#include<process.h>
int main()
{
	int amt,notes,n1;
	printf("\n Enter Amount");
	scanf("%d",&amt);
	printf("\n Enter range (eg 2000,500,100..) :");
	scanf("%d",&notes);
	switch(notes){
		case 2000: n1=amt/2000;
		           printf("\n2000* %d = %d",n1,n1*2000);
		           amt=amt%2000;
		case 500: n1=amt/500;
		          printf("\n500*%d = %d",n1,n1*500);
		          amt=amt%500;
		case 200: n1=amt/200;
		          printf("\n200*%d = %d",n1,n1*200);
		          amt=amt%200;
		case 100: n1=amt/100;
		          printf("\n100*%d = %d",n1,n1*100);
		          amt=amt%100;
		case 50:  n1=amt/50;
		          printf("\n50*%d = %d",n1,n1*50);
		          amt=amt%50;
		case 20:  n1=amt/20;
		          printf("\n20*%d = %d",n1,n1*20);
		          amt=amt%20;
		case 10:  n1=amt/10;
		          printf("\n10*%d = %d",n1,n1*10);
		          amt=amt%10;
		case 5:   n1=amt/5;
		          printf("\n5*%d = %d",n1,n1*5);
		          amt=amt%5;
		case 2:   n1=amt/2;
		          printf("\n2*%d = %d",n1,n1*2);
		          amt=amt%2;
		case 1:   n1=amt/1;
		          printf("\n1*%d = %d",n1,n1*1);
				  amt=amt%1;	          
	}
	return 0;
}
