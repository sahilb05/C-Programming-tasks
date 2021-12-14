//To convert bytes into bits,kb,mb,gb,tb
#include<stdio.h>
int main()
{
	int bytes,bits,kb,mb,gb,tb;
	printf("Enter bytes");
	scanf("%d",&bytes);
	bits=bytes*8;
	kb=bytes*1024;
	mb=kb*1024;
	gb=mb*1024;
	tb=gb*1024;
	printf("\nValaue of bytes=%d",bytes);
	printf("\nValue of bits=%d",bits);
	printf("\nValue of kilobytes=%d",kb);
	printf("\nValue of megabytes=%d",mb);
	printf("\nValue of gigabytes=%d",gb);
	printf("\nValue of terabytes=%d",tb);
	return 0;
}
