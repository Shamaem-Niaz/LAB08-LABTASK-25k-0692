#include <stdio.h>
int main(){
	char arr[5][5];
	int x=0;
	int o=0;
	
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			
			if ( (i+j)%2 == 0){
				arr[i][j] = 'x';
				x++;
				
			}else {
				arr[i][j] = 'o';
				o++;
			}
			printf("%c",arr[i][j]);
		}
		printf("\n");
		
	}
	printf("\n\n");
	
	printf("---SUMMARY---\nSTUDENT SEATED: %d\nEMPTY DESKS: %d\nTOTAL DESKS: %d" ,x,o,x+o);
	
	
}

