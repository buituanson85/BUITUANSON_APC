#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	int sum=0,j=0,TB;
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			if(i%2==0)
			{
				j=j+1;
	    		sum+=arr[i];
			}
		}
	}
    TB=(double)sum/j;
	printf("TB= %d",TB);
}
