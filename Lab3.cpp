#include<stdio.h>

int main(){
	int a;
	printf("Nhap ngay trong tuan a = ");
	scanf("%d",&a);
	if( a >= 2 && a <= 7 )
	{
		printf("Day la thu %d",a);
	}
	else if( a == 8)
	{
		printf("Day la chu nhat");
	}
	else
	{
		printf("Khong phai ngay trong tuan");
	}
}
