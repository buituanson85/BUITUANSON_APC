#include<stdio.h>

int main(){
	int a,b;
	int dem=0;
	printf("Nhap so nguyen a = ");
	scanf("%d",&a);
	printf("Nhap so nguyen b = ");
	scanf("%d",&b);
	if( a==0 || b==0 )
	{
		printf("khong co USCLN.");
	}else{
		if( a>0 )
		{
	    	for(int i=a; dem<1 ;i-- )
	    	{
		    	if( a%i==0)
		    	{
			    	if( b%i==0 )
		    		{
		    			dem++;
			    		printf("USCLN = %d",i);
			    	}
	    		}
	    	}
    	}else{
    		for(int i=a; dem<1 ;i++ )
	    	{
		    	if( a%i==0)
		    	{
			    	if( b%i==0 )
		    		{
		    			dem++;
			    		printf("USCLN = %d",-i);
			    	}
	    		}
	    	}
		}
		
	}
}
