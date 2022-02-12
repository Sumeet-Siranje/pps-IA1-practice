#include<stdio.h>
int input(int *a,int *b,int *c){
  printf("enter three numbers\n");
  scanf("%d%d%d",a,b,c);
  return 0;

}
int cmp(int a,int b,int c){
  int large;
  if(a>b){
    if(a>c)
    large=a;
    else
    large=0;
  }
  else{
    if(b>c)
    large=b;
    else
    large=c; 
  }
  return large;
}
void output(int a,int b,int c,int largest){
  printf("among %d,%d,and %d ,the largest is %d\n",a,b,c,largest);
}
int main(){
  int n1,n2,n3,n4;
  input(&n1,&n2,&n3);
 n4= cmp(n1,n2,n3);
 output(n1,n2,n3,n4);
 return 0;
}
