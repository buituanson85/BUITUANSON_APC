#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap phan tu cua mang:\n");
	for(int i=0 ; i<n ; )
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
		int dem=0,dem2=0;
		dem++;
		for( dem=1 ; dem<=i ; dem++)
		{
			if(arr[i]==arr[i-dem])
	     	{
			    dem2++;
        	}
		}
		if(dem2!=0)
		continue;
		i++;
	}
}
