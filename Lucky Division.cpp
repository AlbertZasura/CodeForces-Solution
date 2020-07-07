#include<stdio.h>
#include<string.h>

int iya=0;

void permutasi(int angka,int n,int test){
	if(angka!=0 && test%angka==0){
		iya=1;
		return ;
	}
	if(n==3){
		if(angka!=0 && test%angka==0){
			iya=1;
			return ;
		}
		return ;
	}
	permutasi((angka*10)+4,n+1,test);
	permutasi((angka*10)+7,n+1,test);
}



int main(){
	char test[1001];
	int angka=0,correct;
	
	iya=0;
	scanf("%d",&angka);
	permutasi(0,0,angka);
	if(iya==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
