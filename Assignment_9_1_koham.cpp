#include <stdio.h>
#define MAX 255
#include<string.h>

int main(){
	int n;
	do{
		printf("Nhap so phan tu n = ");
		scanf("%d",&n);
	}while(n<=0);
    char strc[n][MAX];
    for(int i=0 ; i<n ; i++ ){
    	printf("dong %d:  ",i);
    	scanf("%s",strc[i]);
	}
	char strs[MAX];
	    printf("Nhap chuoi s:  ");
	    scanf("%s",strs);
	bool flag=false;
	for(int i=0 ; i<n ; i++ ){
			if(strcmp(strc[i],strs)==0){
				flag=true;
			}
	}
	if(flag==true){
		printf("Co chuoi s nam trong mang n chuoi");
	}else{
		printf("ko Co chuoi s nam trong mang n chuoi");
	}	
	return 0;
}
