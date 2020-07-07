#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char string[105];
	int len=0;
	
	scanf("%s",string);
	len=strlen(string);
	for(int i=0;i<len;i++){
		if(string[i]=='A' || string[i]=='a' ||string[i]=='o' || string[i]=='O' ||string[i]=='y' || string[i]=='Y' ||string[i]=='e' || string[i]=='E' ||string[i]=='u' || string[i]=='U' ||string[i]=='i' || string[i]=='I' ){
			
		}else{
			
			printf(".%c",tolower(string[i]));
		}
	}
	printf("\n");	
	return 0;
}
