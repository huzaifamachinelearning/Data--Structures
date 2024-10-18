#include<stdio.h>
#include<string.h>
void main(){
	char *str1="Borderland International",*str2="nation",*ptr;
	ptr=strstr(str1,str2);
	printf("The substring is %s\n",ptr);
}
