#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x= ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
	    {
		    printf("tim thay %d trong mang ",x);
	    	break;
    	}
    	else{
    		printf("khong tim thay %d trong mang ",x);
    		break;
		}
	}
}
