#include <stdio.h>
#define MAX 255
#include<string.h>

int main(){
    char strs1[MAX];
    printf("Nhap chuoi s1:  ");
	    scanf("%s",strs1);
	char strs2[MAX];
	    printf("Nhap chuoi s2:  ");
	    scanf("%s",strs2);
	char *str;
	str= strstr(strs1,strs2);
    if(str==NULL){
    	printf("chuoi s2 ko co trong chuoi s1");
	}else{
		printf("chuoi s2  co trong chuoi s1");
	}
	return 0;
}

