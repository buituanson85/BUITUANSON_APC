#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap so a = ");
	scanf("%d",&a);
	printf("Nhap so b = ");
	scanf("%d",&b);
	for( ; a > b ; )
	{
		printf("Nhap lai so b = ");
	    scanf("%d",&b);
	}
	int sum=0;
	for(int i=a ; i<=b ; i++ )
	{
		sum+=i;
	}
	printf("Sum %d --> %d = %d",a,b,sum);
}
