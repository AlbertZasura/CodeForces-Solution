#include<stdio.h>
int main(){
	
	char string[101];
	int count1=0,count2=0,count3=0,a=0;
	int total=0;
	scanf("%s",string);
	
	a=0;
	while(string[a]!='\0'){
		if(string[a]=='1'){
			count1++;
		}else if(string[a]=='2'){
			count2++;
		}else if(string[a]=='3'){
			count3++;
		}
		a++;
	}
	a=(count1+count2+count3)-1;
	total=(count1+count2+count3);
	for(int i=0;i<total;i++){
		if(count1!=0){
			printf("1");
			count1--;
		}else if(count2!=0){
			printf("2");
			count2--;
		}else if(count3!=0){
			printf("3");
			count3--;
		}
		if(a!=0){
			printf("+");
			a--;
		}
	}
	printf("\n");
	return 0;
}
