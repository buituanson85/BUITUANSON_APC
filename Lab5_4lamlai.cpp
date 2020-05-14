#include<stdio.h>

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	int f=0,f1=1,f2=1;
	for(int i=3;i<=n;i++)
	{
		f=f1+f2;
		f2=f1;
		f1=f;	
	}
	if(n>0 && n<=2)
	{
		printf("So thu %d trong day fibonacci la 1",n);
	}
	else
	{
		printf("So thu %d trong day fibonacci la %d",n,f);
	}
}
