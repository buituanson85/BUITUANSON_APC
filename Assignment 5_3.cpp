#include<stdio.h>

int main(){
	int n,sum=0;
	printf("Nhap so nguyen duong n = ");
	scanf("%d",&n);
	for( ; n>0 ; )
	{
		int sd=n%10;
		n=n/10;
		sum+=sd;
	}
	printf("Tong cac chu so cua n = %d",sum);
}
