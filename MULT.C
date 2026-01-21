#include<stdio.h>
#include<conio.h>

int main(){
int a[3][3],i,j,k,b[3][3],p[3][3];
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
printf("multiplication\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  p[i][j]=0;
  for(k=0;k<3;k++){
  p[i][j]=a[i][k]*b[k][j];
 }}}
printf("multiplication of both arrays are:");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  printf("%d",p[i][j]);
 }
 printf("\n");
}
getch();
return 0;
}