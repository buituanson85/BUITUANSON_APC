#include<stdio.h>

int main(){
	int dong,cot;
	do{
		printf("Nhap so dong ma tran: dong = ");
	    scanf("%d",&dong);
	    printf("Nhap so cot ma tran: cot = ");
       	scanf("%d",&cot);
	}while(dong<=0 || cot<=0);
	int arr[dong][cot];
	for(int i=0 ; i<dong ; i++)
	{
		for(int j=0 ; j<cot ;j++)
		{
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("ma tran A sau khi nhap:\n");
	for(int i=0 ; i<dong ; i++ )
	{
		for(int j=0 ; j<cot ; j++ )
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	int ary[dong][cot];
	for(int i=0 ; i<dong ; i++)
	{
		for(int j=0 ; j<cot ;j++)
		{
			printf("ary[%d][%d]=",i,j);
			scanf("%d",&ary[i][j]);
		}
		printf("\n");
	}
	printf("ma tran B sau khi nhap:\n");
	for(int i=0 ; i<dong ; i++ )
	{
		for(int j=0 ; j<cot ; j++ )
		{
			printf("%d\t",ary[i][j]);
		}
		printf("\n");
	}
	int arry[dong][cot],aryr[dong][cot];
	for(int i=0 ; i<dong ; i++ )
	{
		for(int j=0 ; j<cot ; j++ )
		{
			arry[i][j]=arr[i][j]+ary[i][j];
			aryr[i][j]=arr[i][j]-ary[i][j];
		}
		printf("\n");
	}
	
	printf("Cong 2 ma tran A&B:\n");
	for(int i=0 ; i<dong ; i++ )
	{
		for(int j=0 ; j<cot ; j++ )
		{
			printf("%d\t",arry[i][j]);
		}
		printf("\n");
	}
	printf("hieu 2 ma tran A&B:\n");
	for(int i=0 ; i<dong ; i++ )
	{
		for(int j=0 ; j<cot ; j++ )
		{
			printf("%d\t",aryr[i][j]);
		}
		printf("\n");
	}
}
