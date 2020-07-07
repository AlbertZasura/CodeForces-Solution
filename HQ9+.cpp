#include<stdio.h>
int main(){
	
	char string[101]="";
	int i=0;
	
	scanf("%s",&string);
	i=0;
	while(string[i]!='\0'){
		if(string[i]=='H' || string[i]=='Q' || string[i]=='9'){
			break;
		}
		i++;
	}
	if(string[i]=='H' || string[i]=='Q' || string[i]=='9'){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
}
