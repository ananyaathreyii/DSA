#include<stdio.h>
#include<conio.h>

int main(){
int a[3][3],i,j,b[3][3],s[3][3];
clrscr();
printf("enter array elements:");
for (i=0;i<3;i++){
 for(j=0;j<3;j++){
 scanf("%d",&a[i][j]);
 }
 }
 printf("array elements are:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  printf("%d",a[i][j]);
 }
 printf("\n");
 }
printf("enter second array elements:");
for(i=0;i<3;i++){
 for(j=0;j<3;j++){
 scanf("%d",&b[i][j]);
}
}
printf("second array elements are:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  printf("%d",b[i][j]);
 }
 printf("\n");
}
printf("adding:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  s[i][j]=a[i][j]+b[i][j];
}}
printf("addition of both arrays are:");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  printf("%d",s[i][j]);
 }
 printf("\n");
}
getch();
return 0;
}