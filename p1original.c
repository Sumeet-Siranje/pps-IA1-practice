#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers\n");
  scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int c)
{
  printf("sum of the two numbers %d and %d id = %d\n",a,b,c);
}
int main()
{
  int n1,n2,n3;
  input(&n1,&n2);
  add(n1,n2,&n3);
  output(n1,n2,n3);
  
}
