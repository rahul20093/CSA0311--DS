#include<stdio.h>
void main(){
	int num,i,fac = 1;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num > 0){
		for(i = num; i >= 1;i--){
			fac*=i;
		}
		printf("The factorial of %d is %d",num,fac);
	}
	else{
		printf("The factorial of %d is 1");
	}
}
