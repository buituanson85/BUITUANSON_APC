#include<stdio.h>

int main(){
	float a,b,c;
	printf("Nhap vao 3 so can so sanh:\n ");
	printf("So thu nhat: a = ");
	scanf("%f",&a);
	printf("So thu hai: b = ");
	scanf("%f",&b);
	printf("So thu ba: c = ");
	scanf("%f",&c);
	if( a < b )
	{
		if( a < c)
		{
			printf("So lon nhat Min = %f",a);
		}
		else
		{
			printf("So lon nhat Min = %f",c);
		}
	}
	else
	{
		if( b < c)
		{
			printf("So lon nhat Min = %f",b);
		}
		else
		{
			printf("So lon nhat Min = %f",c);
		}
	}
}
