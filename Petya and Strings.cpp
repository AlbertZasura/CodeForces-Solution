#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char string[111]="";
	char string1[111]="";
	int a=0;
	int total,total1=0;
	scanf("%s",string);
	scanf("%s",string1);

	a=0;total=0;
	while(string[a]!='\0'){
		if(string[a]<97){
			string[a]+=32;
		}
		
		if(string1[a]<97){
			string1[a]+=32;
		}
		
		if(string[a]!=string1[a]){
			total=(string[a]-string1[a]);
			break;
		}
		a++;
	}
	
	if(total<0){
		printf("-1\n");
	}else if(total>0){
		printf("1\n");
	}else{
		printf("0\n");
	}
	
//	a=strlen(string);
//	for(int i=0;i<a;i++){
//		string[i]=tolower(string[i]);
//	}
//	a=strlen(string1);
//	for(int i=0;i<a;i++){
//		string1[i]=tolower(string1[i]);
//	}
//	
//	a=strcmp(string,string1);
//	printf("%d\n",a);
	
	return 0;
}
