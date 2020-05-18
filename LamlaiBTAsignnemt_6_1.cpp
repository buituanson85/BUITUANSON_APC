#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap phan tu mang:\n");
	for(int i=0 ; i<n ; i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int sk=0;
	for(int i=0 ; i<n ; i++ )
	{
		if(arr[i]%2!=0)
		{
			sk=arr[i];
		}
	}
	if(sk!=0)
	{
		printf("so le cuoi cung cua mang la: %d ",sk);
	}else{
	printf("mang khong co so le");
    }
}
