#include<stdio.h>
int main(){
	
	char string[1003];
	
	scanf("%s",string);
	
	if(string[0]>96){
		string[0]-=32;
	}
	printf("%s\n",string);
	return 0;
}
