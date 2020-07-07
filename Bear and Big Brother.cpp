#include<stdio.h>

int main(){
	
	int limak=0,bob=0,year=0;
	
	scanf("%d %d",&limak,&bob);
	year=0;
	while(limak<=bob){
		if(limak>bob){
			break;
		}else{
			limak*=3;
			bob*=2;
			year++;	
		}
	}
	printf("%d\n",year);
	return 0;
	
}
