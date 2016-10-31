#include<stdio.h>
#include<stdlib.h>

int main(){

	int input = 0;
	
	while(1){
		
		scanf("%d",&input);
		if(input==0) break;
		for(int i=0;i<input;i++){
	
			if(i%7!=0)
				printf("%d ",i);
		
		}
		printf("\n");
	}

}
