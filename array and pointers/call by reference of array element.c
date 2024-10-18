#include<stdio.h>
display(int *m){
	printf("\n%d",*m);
}
/*display_address(int *m){
	//prints addresses of array element
	printf("\n%u",m);
}*/
void main(){
	int i;
	int marks[]={55,65,75,56,78,78,90};
	for(i=0;i<=6;i++){
		display(&marks[i]);
		
	}
	
/*		for(i=0;i<=6;i++){
		display_address(&marks[i]);
		
	}*/
	
	
}
