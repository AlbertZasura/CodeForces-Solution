#include<stdio.h>
int main(){
	
	char string[101];
	int i=0;
	bool flag=true;
	
	scanf("%s",&string);
	i=1;
	while(string[i]!='\0'){
		if(string[i]>=92){
			flag=false;
		}
		i++;
	}
	
	if(flag==true){
		i=0;
		while(string[i]!='\0'){
			if(string[i]<92){
				string[i]+=32;
			}else{
				string[i]-=32;
			}
			i++;
		}
	}
	
	printf("%s\n",string);
	return 0;
	
}
