#include<stdio.h>

int main(){
	int sum=0;
	int dem=0;
	for(int i=0 ; ; i++ )
	{
		if(i%2!=0)
		{
			dem++;
        	sum+=i;
        	if(dem==100)
        	{
        		break;
			}
		}
	}
	if(dem==100)
	{
		printf("Sum = %d",sum);
	}
}
