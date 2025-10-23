#include <stdio.h>
int main(){
	int n;
	int k=1;
	
	printf("enter: ");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++){
		printf("%4d: ",i);
		
		for (int j=1; j<=5; j++){
			printf("%4d", i*j);
		}
		printf("\n");
	}
	
}
