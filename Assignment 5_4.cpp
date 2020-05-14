#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap so a = ");
	scanf("%d",&a);
	printf("Nhap so b = ");
	scanf("%d",&b);
	if(a>0)
	{
		for(int i=a ; i>0 ; i-- )
    	{
	    	if(a%i==0)
	    	{
	  	        if(b%i==0)
	    		{
	   			    printf("%d la uoc so chung lon nhat.",i);
			    	break;
		    	}	
	    	}
    	}		
	}else{
		for(int i=a ;  ; i++ )
    	{
	    	if(a%i==0)
	    	{
	  	        if(b%i==0)
	    		{
	   			    printf("%d la uoc so chung lon nhat.",-i);
			    	break;
		    	}	
	    	}
    	}		
	}
}
