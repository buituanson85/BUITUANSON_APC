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
    int ary[cot][dong];
    for(int i=0 ; i<dong ; i++ )
    {
    	for(int j=0 ; j<cot ; j++ )
    	{
    		ary[j][i]=arr[i][j];
		}
		printf("\n");
	}
	printf("ma tran hoan vi ary la:\n");
	for(int i=0 ; i<cot ; i++)
	{
		for(int j=0 ; j<dong ; j++ )
		{
			printf("%d\t",ary[i][j]);
		}
		printf("\n");
	}
}
