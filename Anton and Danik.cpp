#include<stdio.h>
int main(){
	
	int total,anton=0,danik=0,i=0;
	char match[100001];
	
	scanf("%d",&total);
	scanf("%s",match);
	while(match[i]!='\0'){
		if(match[i]=='D'){
			danik++;
		}else if(match[i]=='A'){
			anton++;
		}
		i++;
	}
	
	if(anton>danik){
		printf("Anton\n");
	}else if(anton<danik){
		printf("Danik\n");
	}else if(anton==danik){
		printf("Friendship\n");
	}
	
	return 0;
}
