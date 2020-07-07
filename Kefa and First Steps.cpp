#include<stdio.h>
int main(){
	
	int test=0,flag=0,b=0,a=0;
	int ans=0;
	scanf("%d",&test);
	flag=0;
	for(int i=0;i<test;i++){
		scanf("%d",&a);
		if(b!=0 && b<=a){
			flag++;
			if(ans<flag){
				ans=flag;
			}
		}else{
			if(ans<flag){
				ans=flag;
			}
			flag=0;
			
		}
		b=a;
	}
	
	printf("%d\n",ans+1);
	
	
	return 0;
}
