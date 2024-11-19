#include<stdio.h>
void main(){
	int a[10][10],b[10][10],c[10][10],i,j,k,row,col;
	printf("Enter the rows and columns of A and B matrix :");
	scanf("%d %d",&row,&col);
	for(i = 0; i < row; i++){
		for(j = 0 ; j < col ; j++){
			printf("Enter the element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0; i < row; i++){
		for(j = 0 ; j < col ; j++){
			printf("Enter the element b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i = 0 ; i < row ; i++){
		for(j = 0; j < col ; j++){
			c[i][j] = 0;
			for(k = 0 ; k < col; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("The resultant matrix is :\n");
	for(i = 0 ; i < row; i++){
		for(j = 0 ; j < col; j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
