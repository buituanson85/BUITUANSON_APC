#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	do{
		printf("Nhap so phan tu n = ");
		scanf("%d",&n);
	}while(n<=0);
	int *p;
	p= (int *)malloc(n*sizeof(int));
	for(int i=0 ; i<n ; i++)
	{
		printf("Nhap phan tu thu %d = ",i);
		scanf("%d",(p+i));
	}
	printf("Mang sau khi nhap:\n");
	for(int i=0 ; i<n ; i++ )
	{
		printf("%d\t",*(p+i));
	}
	int max=0,sum=0;
    for(int i=0 ; i<n ; i++ )
	{
		if(*(p+i)>0)
		{
			sum+=*(p+i);
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
