#include<stdio.h>
int input(){
int n;
printf("enter the number\n");
scanf("%d",&n);
return n;
}
int sum(int n){
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
  printf("%d is %d\n",n,sum);
}
int main(){
  int p=input();
  int q=sum(p);
  output(p,q);
  return 0;
}