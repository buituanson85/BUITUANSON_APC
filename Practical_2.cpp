#include<stdio.h>
#include<string.h>
#define MAX 225

int main(){
	char str[225];
	printf("Enter string: ");
	scanf("%s",str);
	int vowels=0;
	int consonants = 0;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	int count5=0;
	for(int i=0 ; i<strlen(str) ; i++ ){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
         vowels++;
         if(str[i] == 'a'){
         	count1++;
		 }
		 if(str[i] == 'e'){
		 	count2++;
		 }
		 if( str[i] == 'i'){
		 	count3++;
		 }
		 if(str[i] == 'o'){
		 	count4++;
		 }
		 if( str[i] == 'u'){
		 	count5++;
		 }
      else{
      	consonants++;
	  }   
   }
   printf("\nString str '%s' : %d vowels va %d consonants\n", str, vowels, consonants);
   printf("a: %d,e: %d, i: %d,o :%d,u: %d",count1,count2,count3,count4,count5);
   printf("\na: %.0f %%,e: %.0f %%, i: %.0f %%,o :%.0f %%,u: %.0f %%",(float)count1*100/strlen(str),(float)count2*100/strlen(str),(float)count3*100/strlen(str),(float)count4*100/strlen(str),(float)count5*100/strlen(str)); 
}
