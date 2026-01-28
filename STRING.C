#include<stdio.h>
#include<conio.h>

int main() {
char a[50],b[50];
clrscr();
printf("enter a string:");
scanf("%s",a);
strcpy(b,a);
strrev(b);
if (strcmp(a,b)==0){
printf("string is a palindrome");
}
else {
printf("string is not a palindrome");
}
getch();
return 0;
}
