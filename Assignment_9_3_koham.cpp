#include <stdio.h>
#define MAX 255
#include<string.h>

int main(){
	int n;
	do{
		printf("Nhap so phan tu n = ");
		scanf("%d",&n);
	}while(n<=0);
    char strc[n][MAX],str[MAX];
    for(int i=0 ; i<n ; i++ ){
    	printf("chuoi thu %d:  ",i);
    	scanf("%s",strc[i]);
	}
	int i,j;
	for( i=0 ; i<n-1 ; i++ ){
		for( j=i ; j<n ; j++ ){
			if(strcmp(strc[i],strc[j])>0){
				strcpy(str,strc[i]);
				strcpy(strc[i],strc[j]);
				strcpy(strc[j],str);
			}
		}
	}
	printf("Mang chuoi sau khi sap xep lai:\n");
	for(int i=0 ; i<n ; i++)
	{
		printf("\n%s",strc[i]);
	}
	return 0;
}
