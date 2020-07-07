#include<stdio.h>
#include<string.h>
int main(){
	char string[201];
	int i=0,a=0;
	bool flag=false;
	scanf("%s",&string);
	
	i=0;
	while(string[i]!='\0'){
		if(string[i]=='W' && string[i+1]=='U' && string[i+2]=='B'){
			flag=true;
			i+=3;
		}else if(string[i]!='W' || string[i]!='U' || string[i]!='B'){
			if(a!=0 && flag==true){
				printf(" ");
				a++;
			}
			printf("%c",string[i]);
			a++;
			i++;
			flag=false;
		}
	}
	
	printf("\n");
	return 0;
	
}
