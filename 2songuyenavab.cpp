#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	printf("Nhap so nguyen b: ");
	scanf("%d",&b);
	float kq;
	if( a >= b)
	{
		kq = 1.0*a/b;
		printf("kq duoc in ra %d/%d = %f\n",a,b,kq);
	}
	if( b >= a )
	{
		kq = a*b;
		printf("kq duoc in ra %d*%d = %f",a,b,kq);
	}
}
