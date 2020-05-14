#include<stdio.h>

int main(){
	int f=0,f1=0,f2=1,n;
	printf("Nhap so nguyen duong n = ");
	scanf("%d",&n);
		for(int i=0; f<n ;i++)
		{
			f=f1+f2;
			f2=f1;
			f1=f;
		}
		printf("So fibonacii gan nhat va nho hon %d la %d",n,f2);
}
