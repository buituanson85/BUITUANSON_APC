#include<stdio.h>

int main(){
	int num;
	printf("Nhap so nguyen duong num = ");
	scanf("%d",&num);
	if(num>0 && num<9999)
	{
		int a=num%10,num1=num/10;
		if( num1==0 )
		{
			printf("So nghich dao so nguyen duong %d la %d",num,a);
		}else
		{
			int b=num1%10,num2=num1/10;
			if( num2==0 )
			{
				printf("So nghich dao so nguyen duong %d la %d%d",num,a,b);
			}else
			{
				int c=num2%10,num3=num2/10;
				if( num3==0)
				{
				    printf("So nghich dao so nguyen duong %d la %d%d%d",num,a,b,c);        	
				}else
				{
					int d=num3%10,num4=num3/10;
					printf("So nghich dao so nguyen duong %d la %d%d%d%d",num,a,b,c,d);
				}
			}
		}
	}else
	{
	    printf("So %d khong thoa man de bai ra moi nhap lai.",num);	
	}
}
