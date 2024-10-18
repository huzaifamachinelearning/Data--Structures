#include<stdio.h>
void main(){
	char string[]="abc,d",*ptr;
	
	ptr=strtok(string,",");
	if (ptr) printf("\n%s",ptr);
	ptr=strtok(NULL,",");
	if (ptr) printf("\n%s",ptr);
	
}
