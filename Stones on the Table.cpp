#include<stdio.h>
int main(){
	
	int stone,count=0;
	char gem[60],flag[3];
	
	scanf("%d",&stone);
	scanf("%s",gem);
	
	count=0;
	flag[0]=gem[0];
	for(int i=1;i<stone;i++){
		if(flag[0]==gem[i]){
			count++;
		}
		flag[0]=gem[i];
	}
	printf("%d\n",count);
	
	return 0;
}
