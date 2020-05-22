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
	int count=0,max=0;
    for(int i=0 ; i<n ; i++ )
	{
		if(arr[i]>0)
		{
			count++;
			if(count>max)
			{
				max=count;
			}
		}else{
			count=0;
		}
	}
	printf("\nSo luong cac so nguyen duong lien tiep nhieu nhat la %d phan tu.",max);
}
