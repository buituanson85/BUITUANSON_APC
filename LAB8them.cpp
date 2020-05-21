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
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	printf("Mang sau khi nhap:\n ");
	for(int i=0 ; i<n ; i++)
	{
		printf("%d\t",*(p+i));
	}
	for(int i=0 ; i<n-1 ; i++)
	{
		int team;
		for(int j=i+1 ; j<n ; j++ )
		{
			if(*(p+i)>*(p+j))
			{
				team=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=team;
			}
		}
	}
	printf("\nMang sau khi sap xep xong:\n");
	for(int i=0 ; i<n ; i++ )
	{
		printf("%d\t",*(p+i));
	}
	int m;
	printf("\nNhap so phan tu m = ");
	scanf("%d",&m);
	p= (int *)realloc(p,m*sizeof(int));
	for(int i=n ; i<(n+m) ; i++ )
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	printf("mang sau khi them: \n");
	for(int i=0 ; i<(n+m) ;i++)
	{
		printf("%d\t",*(p+i));
	}
	for(int i=0;i<(n+m-1);i++)
	{
		int team;
		for(int j=i+1 ; j<n+m ; j++ )
		{
			if(*(p+i)>*(p+j))
			{
				team=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=team;
			}
		}
	}
	printf("\nMang sau khi xap xep lai:\n");
	for(int i=0 ; i<n+m ; i++ )
	{
		printf("%d\t",*(p+i));
	}
}
