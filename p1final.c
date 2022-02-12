#include<stdio.h>
void input(int *a,int *b){
  printf("enter the number\n");
  scanf("%d%d",a,b);

}
void add(int a,int b,int *sum){
  *sum=a+b;
}
void output(int a,int b,int sum){
  printf("the sum %d and %d is %d\n",a,b,sum);
}
int main(){
  int n1,n2,n3;
  input(&n1,&n2);
 add(n1,n2,&n3);
  output(n1,n2,n3);
  return 0;
}