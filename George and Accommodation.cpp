#include<stdio.h>
int main(){
	
	int test=0;
	int p=0,q=0,count=0;
	
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		scanf("%d %d",&p,&q);
		if((q-p)>=2){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
