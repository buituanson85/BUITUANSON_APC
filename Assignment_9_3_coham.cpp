#include <stdio.h>
#define MAX 255
#include<string.h>

void NhapXuatMangChuoi(char strc[][MAX],int n);
void SapXepLaiChuoi(char strc[][MAX],int n);
void XuatLaiChuoi(char strc[][MAX],int n);

int main(){
	int n;
	char strc[n][MAX];
	NhapXuatMangChuoi(strc,n);
	SapXepLaiChuoi(strc,n);
	XuatLaiChuoi(strc,n);
	return 0;
}

void NhapXuatMangChuoi(char strc[][MAX],int n){
	do{
		printf("Nhap so phan tu n = ");
		scanf("%d",&n);
	}while(n<=0);
    for(int i=0 ; i<n ; i++ ){
    	printf("dong %d:  ",i);
    	scanf("%s",strc[i]);
	}
}

void SapXepLaiChuoi(char strc[][MAX],int n){
	char str[MAX];
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
}

void XuatLaiChuoi(char strc[][MAX],int n){
	printf("Chuoi sau khi sap xep lai:\n");
	for(int i=0 ; i<n ; i++ ){
		printf("\n%s",strc[i]);
	}
}

