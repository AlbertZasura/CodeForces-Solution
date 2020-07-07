#include<stdio.h>
int main(){
	
	long long length=0,index=0,mid=0;
	
	scanf("%I64d %I64d",&length,&index);
	if(length%2==0){
		mid=length/2;
		if(index<=mid){
			printf("%I64d\n",(index+index)-1);
		}else{
			printf("%I64d\n",(index-mid)*2);
		}
	}else if(length%2!=0){
		mid=length/2+1;
		if(index<=mid){
			printf("%I64d\n",(index+index)-1);
		}else{
			printf("%I64d\n",(index-mid)*2);
		}
	}
	return 0;
}
