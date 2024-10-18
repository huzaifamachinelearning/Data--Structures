#include<stdio.h>
void main(){
	int i;
	int num[40];
	for(i=0;i<=39;i++){
		num[i]=i;
	}
/*	
	for(i=0;i<=100;i){
		num[i]=i;
	}
	
	After exceeding the size of the array data entered through the script 
	will simply be placed outside of array leading to unpredictable results
	but the program wil not result in an error.So it is the responsibility
	of the programer to ensure that array size is not exceeded*/
	for(i=0;i<40;i++){
		printf("\narray[%i]=%i",i,num[i]);
	}
}
