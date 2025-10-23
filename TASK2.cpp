#include <stdio.h>
int main(){
	int matrix[3][3] = { {12,34,56}, {72,4,6}, {90,67,12} };
	int sum=0;
	int a,b;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if (matrix[i][j] >= sum){
				sum = matrix[i][j];
				a=i;
				b=j;
			}
		}
	}
	printf("%d at index[%d][%d]",sum,a,b);
}
