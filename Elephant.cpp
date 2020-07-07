#include<stdio.h>
int main(){
	
	int elephant=0,move=0;
	move=0;
	scanf("%d",&elephant);
	move+=elephant/5;
	if(elephant%5!=0){
		move++;
	}
	printf("%d\n",move);
	
	return 0;
}
