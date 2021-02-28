#include <stdio.h>
#include <string.h>
int main () {
char str1[12] = "Hello";
char str2[12] = "World";
char str3[12];
int  len ;
/* copy str1 into str3 */
//strcpy(str3, str1);
strcat( str1, str2);
printf(str2);
return 0;
}
