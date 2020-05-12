#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	int i=1;
	printf("Cac so tu nhien tu 1 den %d chia het cho 3 la:\t",n);
	for( ;i<n;i++)
	{
		if(i%3==0)
		{
			printf("%d\t",i);
		}
	}
}
