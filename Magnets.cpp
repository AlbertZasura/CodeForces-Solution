#include<stdio.h>
int main(){
	
	int test=0,count=0;
	char magnet[100001][3];
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		scanf("%s",magnet[i]);
		if(i!=0 && magnet[i][0]!=magnet[i-1][0]){
			count++;
		}
	}
	printf("%d\n",count+1);
	
	return 0;
}
