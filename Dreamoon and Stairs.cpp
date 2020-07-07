#include<stdio.h>
int main(){
	
	int n,m,test,kali,i=1,test1,tampung;
	bool flag1=false,flag=false;
	scanf("%d %d",&n,&m);
	
	test=m;
	if(m>n){
		printf("-1\n");
	}else{
		while(flag==false){
		test*=i;
		kali=2*test;
		if(kali<n){
			i++;
		}else if(kali>test){
			test1=test;
			test1--;
			while(flag1==false){
				if(test1<0){
					break;
				}
				kali=2*test1;
				if(kali==n){
					if(test1%m==0){
						flag1=true;
					}
				}else if(kali<n){
					tampung=n-kali;
					if(tampung+test1==test){
						printf("%d\n",test);
//						break;
						flag1=true;
						flag=true;
					}
				}
				test1--;
			}
		}
		i++;
	}	
	}
	
	
	return 0;
}
