#include<stdio.h>
#include<string.h>
int main () {
	
	char a[101],b[101];
	int i,c=0,Yes=0;
	
	scanf("%s",a);
	scanf("%s",b);
	c=strlen(a);
	i=0,Yes=0;
	
	for(int j=(c-1);j>=0;j--){
		if(a[j]==b[i]){
		Yes++;	
		}
	i++;
	}
		
	if(c==Yes){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
