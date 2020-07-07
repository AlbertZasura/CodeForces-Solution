#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int year=0,num=0;
	int a=0,b=0,c=0,d=0;
	
	scanf("%d",&year);
	
	while(num==0){
		year++;
		a=year%10;
		b=year/10%10;
		c=year/100%10;
		d=year/1000;
//		printf("%d %d %d %d",a,b,c,d);
		if((a!=b) &&(a!=c) &&(a!=d) &&(b!=c) &&(b!=d) &&(c!=d)){
			printf("%d\n",year);
			num=1;
		}
	
	}
	
	
	
	return 0;
}
