#include<stdio.h>
int main(){
	
	int a,b,c,test,ans;
	
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	test=a+(b*c);
	ans=test;
	test=a*(b+c);
	if(ans<test){
		ans=test;
	}
	test=a*b*c;
	if(ans<test){
		ans=test;
	}
	test=(a+b)*c;
	if(ans<test){
		ans=test;
	}
	test=(a+b)+c;
	if(ans<test){
		ans=test;
	}
	printf("%d\n",ans);
	return 0;
}
