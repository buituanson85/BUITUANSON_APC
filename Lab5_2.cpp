#include<stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	double sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		sum+=(double)1/i;
	}
	printf("Sum = %lf",sum);
}
