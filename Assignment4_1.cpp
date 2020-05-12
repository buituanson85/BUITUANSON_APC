#include<stdio.h>

int main(){	
	double a,b,c;
	printf("Nhap vao 3 canh a,b,c:\n");	
	for( ; ; )
	{   
	    printf("Nhap canh a = ");
     	scanf("%lf",&a);
     	printf("Nhap canh b = ");
     	scanf("%lf",&b);
     	printf("Nhap canh c = ");
     	scanf("%lf",&c);
     	if(a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b)
     	    break;
     	printf("Ba so tren khong tao thanh tam giac vui long nhap lai.\n");
    }
    printf("Ba canh ban nhap thoa man dk tao thanh tam giac");
}

