#include<stdio.h>
#include<string.h>
#define MAX 225
void Concat(char strs1[],char strs2[]){
	int count=0;
	for(int i=strlen(strs1) ; i<(strlen(strs1)+strlen(strs2)) ; i++ ){
		strs1[i]=strs2[count];
    	count++;
	}	
}

int main(){
	char strs1[225]="FPT ";
	char strs2[225]="APTECH";
//	char strs1[225];
 //   char strs2[225];
	printf("Enter the fist string: %s ",strs1);
//	scanf("%s",strs1);
	printf("\nEnter the second string: %s",strs2);
//	scanf("%s",strs2);
	Concat(strs1,strs2);
	printf("\nThe concatenated string: %s",strs1);
	return 0;
}

