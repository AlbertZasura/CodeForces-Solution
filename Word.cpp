#include<stdio.h>
int main(){
	
	char string[101];
	int up=0,lower=0,i=0;
	
	scanf("%s",string);
	up=0,i=0,lower=0;
	while(string[i]!='\0'){
		if(string[i]<92){
			up++;
		}else if(string[i]>=92){
			lower++;
		}
		i++;
	}
	i=0;
	if(up==lower){
		while(string[i]!='\0'){
			if(string[i]<92){
				string[i]+=32;
			}i++;
		}
	}else if(up>lower){
		while(string[i]!='\0'){
			if(string[i]>=92){
				string[i]-=32;
			}i++;
		}
	}else{
		while(string[i]!='\0'){
			if(string[i]<92){
				string[i]+=32;
			}i++;
		}
	}
	printf("%s\n",string);
	
	return 0;
}
