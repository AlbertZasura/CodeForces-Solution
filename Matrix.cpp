#include<stdio.h>
int main(){
	
	int matrix[6][6];
	int move=0;
	
	move=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j]==1){
				if(i<=2){
					move+=(2-i);
				}else{
					move+=(i-2);
				}
				
				if(j<=2){
					move+=(2-j);
				}else{
					move+=(j-2);
				}
			}
		}
	}
	printf("%d\n",move);
	
	
	return 0;
}
