#include<stdio.h>
void input(int *a,int *b){
  printf("enter the first numbers\n");
  scanf("%d",a);
  printf("enter the second  numbers\n");
  scanf("%d",b);
}
void add(int a,int b,int *sum){
*sum=a+b;
}
void output(int a,int b,int c){
  printf("sum of %d and %d is %d\n",a,b,c);
}
int main()
{
  int n1,n2,n3;
  input(&n1,&n2);
  add(n1,n2,&n3);
  output(n1,n2,n3);
  return 0;
}