#include<stdio.h>
int main(){
	int test=0;
	char bit[5]="";
	int x=0;
	
	scanf("%d",&test);
	getchar();
	for(int i=0;i<test;i++){
		scanf("%s",&bit);
		if(bit[0]=='-'){
			--x;
		}else if(bit[0]=='+'){
			++x;
		}else if(bit[0]=='X' && bit[1]=='+'){
			x++;
		}else if(bit[0]=='X' && bit[1]=='-'){
			x--;
		}
	}
	printf("%d\n",x);
}
