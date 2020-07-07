#include<stdio.h>
int main(){
	
	int totalX=0,totalY=0,totalZ=0;
	int x,y,z,test;
	
	
	scanf("%d",&test);
	totalX=0;totalY=0;totalZ=0;
	for(int i=0;i<test;i++){
		scanf("%d %d %d",&x,&y,&z);
		totalX+=x;
		totalY+=y;
		totalZ+=z;
	}
	
	if(totalX==0 &&totalX==0 &&totalX==0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
}
