#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int gt=1;
	for(int i=1;i<=n;i++)
	{
		gt*=i;
	}
	printf("%d! = %d ",n,gt);
}
