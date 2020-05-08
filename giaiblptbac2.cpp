#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	printf("Nhap du lieu phuong trinh bac 2:\n");
	printf("Nhap gia tri a = ");
	scanf("%lf",&a);
	printf("Nhap gia tri b = ");
	scanf("%lf",&b);
	printf("Nhap gia tri c = ");
	scanf("%lf",&c);
	if( a == 0)
	{
		if( b == 0)
		{
			if( c == 0)
			{
				printf("Phuong trinh co vo so nghiem.");
			}
			else
			{
				printf("Phuong trinh vo nghiem.");
			}
		}
		else
		{
			printf("Phuong trinh co nghiem x = %lf",-c/b);
		}
	}
	else
	{
		double del;
		del = b*b - 4*a*c;
		if( del < 0 ) 
		{
			printf("Phuong trinh vo nghiem.");
		}
		else
		{
			if( del == 0 )
			{
				printf("Phuogn trinh co nghiem kep x1=x2= %lf",-b/(2*a));
			}
			else
			{
				printf("Phuong trinh co 2 nghiem phan biet:\n x1= %lf\nx2= %lf",(-b+sqrt(del))/(2*a),(-b-sqrt(del))/(2*a));
			}
		}
	}
}
