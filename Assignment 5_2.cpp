#include<stdio.h>

int main(){
	int n,n1,dem;
	printf("Nhap so nguyen duong n = ");
	scanf("%d",&n);
	for( ; n > 0 ; dem++ )
	{
		n=n/10;
	}
	printf("cac chu so trong so nguyen duong = %d ",dem);
}
