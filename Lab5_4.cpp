#include<stdio.h>

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	int f=0;
	for(int i=3;i<=n;i++)
	{
		f+=(i-2)+(i-1);
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
