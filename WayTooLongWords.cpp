#include<stdio.h>
#include<string.h>
int main(){
	
	int len=0,a=0;
	char string[101];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		len=0;
		scanf("%s",string);
		len=strlen(string);
		if(len>10){
			printf("%c%d%c\n",string[0],(len-2),string[len-1]);
		}else{
			printf("%s\n",string);
		}
	}
	
	return 0;
}
