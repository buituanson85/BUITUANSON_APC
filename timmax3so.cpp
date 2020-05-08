#include<stdio.h>

int main(){
	double a,b,c;
	printf("Nhap vao 3 so can so sanh:\n ");
	printf("So thu nhat: a = ");
	scanf("%lf",&a);
	printf("So thu hai: b = ");
	scanf("%lf",&b);
	printf("So thu ba: c = ");
	scanf("%lf",&c);
	if( a > b )
	{
		if( a > c)
		{
			printf("So lon nhat Max = %lf",a);
		}
		else
		{
			printf("So lon nhat Max = %lf",c);
		}
	}
	else
	{
		if( b > c)
		{
			printf("So lon nhat Max = %lf",b);
		}
		else
		{
			printf("So lon nhat Max = %lf",c);
		}
	}
}
