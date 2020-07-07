#include<stdio.h>


int main(){
	
	char input[20];
	int yes=0,i=0;
	
	scanf("%s",input);
	while(input[i]!='\0'){
		if(input[i]=='4'||input[i]=='7'){
			yes++;
		}
		i++;
	}
	
	if(yes==7 || yes==4){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
