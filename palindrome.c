#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[] = "ramar";
	int len = strlen(str)-1 ;
	printf("length is %d , sizeof(str) =%ld\n",len,sizeof(str));
	char* reverseStr = (char*) malloc(sizeof(str));
	char *c =  str;
	int i = 0;
	while(*c != '\0'){
		reverseStr[i] = str[len - i];
		printf("%c %c\n",*c,reverseStr[i]);
		i++;
		c++;
	}
	reverseStr[i] = '\0';
	printf("Value is %s\n",reverseStr);
	if(!strcmp(str,reverseStr))
		printf("%s is a palindrome\n",reverseStr);
	else
		printf("%s is not a palindrome\n", reverseStr);
	return 0;
}
