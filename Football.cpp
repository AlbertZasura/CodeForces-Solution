#include<stdio.h>
int main(){
	
	
	char flag[2]="2";
	char player[101]="";
	int a=0,count=0;
	
	scanf("%s",player);
	while(player[a]!='\0'){
		if(player[a]!=flag[0]){
			flag[0]=player[a];
			count=1;
		}else if(player[a]==flag[0]){
			count++;
			if(count==7){
				break;
			}
		}
		a++;
	}
	
	if(count==7){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
}
