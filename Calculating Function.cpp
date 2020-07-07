#include<stdio.h>
int main(){
	
	long long f=0,total=0;
	scanf("%I64d",&f);
	if(f%2==0)total=f/2;
	else total=((f+1)/2)*(-1);
	printf("%I64d\n",total);
	return 0;
}
