#include<stdio.h>

int main(){
	int num,num2=0;
	printf("Nhap so nguyen num = ");
	scanf("%d",&num);
	for(;num>0 || num<0;)
	{
		num2=num2*10+num%10;
		num=num/10;
	}
	printf("So Ngich dao la %d",num2);
}
