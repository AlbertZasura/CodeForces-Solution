#include<stdio.h>
int main(){
	
	int test=0,total=0,n[10004],two=0,one=0,three=0;
	
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		scanf("%d",&n[i]);
		if(n[i]==4){
			total++;
		}else if(n[i]==3){
			if(one>0){
				total++;
				one--;
			}else{
				three++;
			}
		}else if(n[i]==2){
			if(two>0){
				total++;
				two--;
			}else if(one>1){
				total++;
				one-=2;
			}else{
				two++;
			}
		}else if(n[i]==1){
			if(three>0){
				total++;
				three--;
			}else if(two>1){
				total++;
				two-=2;
			}else if(one>2){
				total++;
				one-=3;
				
			}
			else{
				one++;
			}
		}
	}
	printf("one-> %d\ntwo-> %d\nthree-> %d\n",one,two,three);
	
	if(two!=0 || three!=0 || one!=0){
		two*=2;
		three*=3;
		one*=1;
		total+=((two+three+one)/4);
		if(((two+three+one)%4)!=0){
			total++;
		}
	}
	printf("%d\n",total);
}
