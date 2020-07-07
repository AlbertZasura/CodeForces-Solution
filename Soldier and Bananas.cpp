#include<stdio.h>
int main(){
	
	int k,n,w,total=0;
	scanf("%d %d %d",&k,&n,&w);
	total=0;
	
	for(int i=1;i<=w;i++){
		total+=(i*k);
	}
	
	if(n<=total){
		printf("%d\n",total-n);
	}else{
		printf("0\n");
	}
	return 0;
}
