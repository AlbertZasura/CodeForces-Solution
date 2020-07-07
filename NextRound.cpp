#include<stdio.h>
int main(){
	int a=0,b=0,count=0;
	int c[10001];
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++){
		scanf("%d",&c[i]);
	}
	for(int j=0;j<a;j++){
		if(c[j]>=c[b-1] && c[j]>0){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
