#include<stdio.h>
#define MAX 255
#include<string.h>
#define MAX2 255

void NhapMangChuoi(char strc[][MAX],int n,char strs[MAX]);
void XuatKetQuaKiemTra(char strc[][MAX],int n,char strs[MAX]);

int main(){
	int n;
	char strc[n][MAX],strs[MAX];
	NhapMangChuoi(strc,n,strs);
	XuatKetQuaKiemTra(strc,n,strs);
}

void XuatKetQuaKiemTra(char strc[][MAX],int n,char strs[MAX]){
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
}

void NhapMangChuoi(char strc[][MAX],int n,char strs[MAX]){
	do{
		printf("Nhap so phan tu n = ");
		scanf("%d",&n);
	}while(n<=0);
    for(int i=0 ; i<n ; i++ ){
    	printf("dong %d:  ",i);
    	scanf("%s",strc);
	}
	    printf("Nhap chuoi s:  ");
	    scanf("%s",strs);
}
