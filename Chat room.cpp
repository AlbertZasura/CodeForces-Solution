#include<stdio.h>
int main(){
	
	char word[101],hello[7]="hello";	
	int a=0,b=0;
	scanf("%s",word);
	while(word[a]!='\0'){
		if(word[a]==hello[b]){
			b++;
			if(b==5){
				printf("YES\n");
				break;
			}
		}
		a++;
	}
	
	if(b!=5){
		printf("NO\n");
	}
	
	return 0;
}
