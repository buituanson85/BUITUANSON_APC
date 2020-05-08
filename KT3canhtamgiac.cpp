#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("Nhap canh a = ");
	scanf("%f",&a);
	printf("Nhap canh b = ");
	scanf("%f",&b);
	printf("Nhap canh c = ");
	scanf("%f",&c);
	if( a + b > c)
	{
		if( b + c > a)
		{
			if( a + c > b)
			{
				float p,p2,s;
				p = a + b + c;
				p2 = p/2;
				s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
				printf("Chu vi tam giac p = %f\n",p);
				printf("Dien tic tam giac s = %f",s);
			}
			else
			{
				printf("Ba canh khong tao thanh tam giac");
			}
		}
		else
		{
			printf("Ba canh khong tao thanh tam giac");
		}
	}
	else
	{
		printf("Ba canh khong tao thanh tam giac");		
	}
}
