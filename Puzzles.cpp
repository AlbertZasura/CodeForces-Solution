#include<stdio.h>
int main(){
	
	int n=0,m=0,puzzle[55],big=0,small=0;
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&puzzle[i]);
		
	}
	big=puzzle[0];
	small=puzzle[0];
	for(int i=0;i<n;i++){
		if(big<puzzle[i]){
			big=puzzle[i];
		}
		if(small>puzzle[i]){
			small=puzzle[i];
		}
	}
//	printf("big = %d\nsmall = %d\n",big,small);
	printf("%d\n",big-small);
	return 0;
}
