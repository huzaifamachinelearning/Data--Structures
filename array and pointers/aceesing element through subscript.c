#include<stdio.h>
void main(){
	int num[]={24,34,12,44,56,17};
	int i=0;
	while(i<=5){
		printf("\n element address is%u",&num[i]);
		printf("\n element is %i",num[i]);
		i++;
	}
}
