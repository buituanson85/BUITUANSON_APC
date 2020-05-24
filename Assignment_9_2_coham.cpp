#include <stdio.h>
#define MAX 255
#include<string.h>

void NhapHaiChuoi(char strs1[MAX],char strs2[MAX]);
void XuatKetQuaKiemTra(char strs1[MAX],char strs2[MAX]);

int main(){
	char strs1[MAX],strs2[MAX];
	NhapHaiChuoi(strs1,strs2);
	XuatKetQuaKiemTra(strs1,strs2);
}

void NhapHaiChuoi(char strs1[MAX],char strs2[MAX]){
    printf("Nhap chuoi s1:  ");
	    scanf("%s",strs1);
	printf("Nhap chuoi s2:  ");
	    scanf("%s",strs2);
}

void XuatKetQuaKiemTra(char strs1[MAX],char strs2[MAX]){
	char *str;
	bool flag=false;
	str= strstr(strs1,strs2);
    if(str==NULL){
    	printf("chuoi s2 ko co trong chuoi s1");
	}else{
		printf("chuoi s2  co trong chuoi s1");
	}
}
