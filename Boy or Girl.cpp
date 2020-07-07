#include<stdio.h>
int main(){
	
	char string[101]="a",contain[101]="";
	int a=0,count=1,b,flag=1;
	
	scanf("%s",string);
	contain[0]=string[0];
	while(string[a]!='\0'){
		b=0;
		while(contain[b]!='\0'){
			
			if(contain[b]!=string[a]){
				flag=1;
			}else{
				flag=0;
				break;
			}
			b++;
		}
		if(flag==1){
			contain[b]=string[a];
			count++;
		}
		a++;
	}
	
	if(count%2==0){
		printf("CHAT WITH HER!\n");
	}else{
		printf("IGNORE HIM!\n");
	}
	
	
	
	return 0;
}
