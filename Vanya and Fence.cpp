#include<stdio.h>
int main(){
	
	int n=0,m=0,h=0,total=0;
	
	scanf("%d %d",&n,&m);
	total=0;
	for(int i=0;i<n;i++){
		scanf("%d",&h);
		if(h>m){
			total+=2;
		}else if(h<=m){
			total+=1;
		}
	}
	printf("%d\n",total);
	
	return 0;
}
