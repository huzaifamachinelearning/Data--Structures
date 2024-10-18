#include<stdio.h>
void display(int *j,int n){
	int i=1;
	while(i<=n){
		printf("\n element is %i",*j);
		i++;
		j++;
	}
	
}
/*void display2(int *j,int n){
	int i=0;
	while(i<=(n-1)){
		printf("\n element is %i",*(j+i));
		i++;
		
	}
// better to use *(j+i)	rather than changing the value in j
}*/


void main(){
	int num[]={24,34,12,44,56,17};
	display(&num[0],6);
	//display2(&num[0],6);
}
