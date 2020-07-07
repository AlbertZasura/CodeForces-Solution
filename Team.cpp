#include<stdio.h>
int main(){
	int a,b,c,d,e;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d %d %d",&b,&c,&d);
		if(b+c+d>=2){
			e++;
		}
	}
	printf("%d\n",e);
	return 0;
}
