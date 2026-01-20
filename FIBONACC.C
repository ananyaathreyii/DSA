 #include<stdio.h>
 #include<conio.h>

int fib(int n){
if (n==0){
 return 0;
 }
if (n==1){
 return 1;
 }
else{
 return(fib(n-1)+fib(n-2));
 }
}
int main(){
int i,n;
clrscr();
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
 printf("%d", fib(i));
 }
 getch();
 return 0;
}