#include <stdio.h>

void creatAndPrint();

int main(){
	int n,m;
	printf(" nhap so hang: ");
	scanf("%d",&n);
	printf(" nhap so cot: ");
	scanf("%d",&m);
	creatAndPrint(n,m);
	return 0;
}

void creatAndPrint(int row,int column){
	int arr[row][column];
	for(int i=0;i<row;i++){	
		for(int j=0;j<column;j++){
			printf(" nhap gia tri vi tri [%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int n=0;n<row;n++){
		for(int m=0;m<column;m++){
			printf("%d",arr[n][m]);
		}
		printf("\n");
	}
}
