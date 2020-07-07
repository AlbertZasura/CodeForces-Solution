#include<stdio.h>
int main(){
	
	int test=0;
	int column[101],temp=0;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		scanf("%d",&column[i]);
	}
	temp=0;
	for(int i=0;i<test;i++){
		for(int j=i;j<test;j++){
			if(column[i]>column[j]){
				temp=column[i];
				column[i]=column[j];
				column[j]=temp;
			}
		}
		if(i!=test-1){
			printf("%d ",column[i]);	
		}else{
			printf("%d\n",column[i]);
		}
		
	}
	
	return 0;
}
