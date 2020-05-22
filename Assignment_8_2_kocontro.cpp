#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	do{
		printf("Nhap so phan tu n = ");
		scanf("%d",&n);
	}while(n<=0);
	int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Mang sau khi nhap:\n");
	for(int i=0 ; i<n ; i++ )
	{
		printf("%d\t",arr[i]);
	}
	int max=0,sum=0;
    for(int i=0 ; i<n ; i++ )
	{
		if(arr[i]>0)
		{
			sum+=arr[i];
			if(sum>max)
			{
				max=sum;
			}
		}else{
			sum=0;
		}
	}
	printf("\ntong so nguyen duong lien tiep lon nhat la Sum = %d phan tu.",max);
}
