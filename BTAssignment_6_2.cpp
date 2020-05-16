#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap phan tu cua mang:\n");
	for(int i=0 ; i<n ; i++ )
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(int i=0 ; i<n ; i++ )
	{
		if((arr[i] > 0) && (arr[i]<min))
		{
			min=arr[i];
		}
	}
	printf("Min =%d",min);
}
