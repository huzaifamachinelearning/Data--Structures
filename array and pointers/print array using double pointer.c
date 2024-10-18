#include<stdio.h>
void show(int **k){
	printf("\nelement is %i",**k);
}
display(int *m){
	show(&m);
}

void main(){
	int i;
	int marks[]={55,65,75,56,78,78,90};
	for(i=0;i<=6;i++){
		display(&marks[i]);
		
	}
	
}
