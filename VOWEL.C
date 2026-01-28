#include<stdio.h>
#include<conio.h>

int main() {
char a[50],c;
int count=0,i;
clrscr();
printf("enter a string:");
scanf("%s",a);
for(i=0;i<strlen(a); i++){
c=tolower(a[i]);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
count=count+1;
}
}
printf("number of vowels are %d",count);
getch();
return 0;
}