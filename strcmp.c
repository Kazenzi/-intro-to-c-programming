#include<stdio.h>
#include <string.h>
main(){
char str1[10],str2[10];
gets(str1)="80";
gets(str2)="50";
if(strcmp(str1,str2)==0)
printf("Strings :equal");
else
printf("Strings: not equal");
return 0;
}
