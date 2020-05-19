#include<stdio.h>

int main(){
	int dong,cot;
	do{
		printf("Nhap so  dong = ");
	    scanf("%d",&dong);
	    printf("Nhap so cot = ");
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
	printf("ma tran sau khi nhap:\n");
	for(int i=0 ; i<dong ; i++ )
	{
		for(int j=0 ; j<cot ; j++ )
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	int sumtc=0,sumtp=0;
	float tbsum;
	printf("Trung cong 2 duong treo chinh phu ma tran:\n");
	for(int i=0 ; i<dong ; i++ )
	{
		sumtc+=arr[i][i];
		sumtp+=arr[i][dong-i-1];
		tbsum=(float)(sumtc+sumtp)/2;
	}
	printf("tbsum= %f",tbsum);
}
