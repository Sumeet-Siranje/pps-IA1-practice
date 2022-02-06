#include<stdio.h>
int input(){
  int a;
  printf("enter a number \n");
  scanf("%d",&a);
  return a;
}
int calc(int n){
int ans=0;
for(int i=1;i<=n;i++){
  ans=ans+i;
}
return ans;
}
void output(int n,int sum){
for(int i=1;i<=n;i++){
  printf("%d",i);
}
printf("the sum of %d is %d\n",n,sum);
}
int main(){
  int a=input();
 int  s=calc(a);
  output(a,s);
  return 0;
}