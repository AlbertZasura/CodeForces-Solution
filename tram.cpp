#include<stdio.h>

int main(){
	
	int testcase=0,answer=0,capacity=0,out=0,enter=0;
	
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d %d",&out, &enter);
		capacity=(capacity-out)+enter;
		if(capacity>answer){
			answer=capacity;
		}
	}
	printf("%d\n",answer);
	
	return 0;
}
