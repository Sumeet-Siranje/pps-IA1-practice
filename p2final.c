#include<stdio.h>
int input(int *a,int *b,int *c){
  
  printf("enter the first number\n");
  scanf("%d",a);
  printf("enter the second number\n");
  scanf("%d",b);
  printf("enter the third number\n");
  scanf("%d",c);

  return a,b,c;
}
int cmp(int a,int b,int c){
  int large;
 if(a>b && a>c){
large=a;
 }
 else if(b>a && b>c){
   large=b;
 }
 else if(c>a && c>b){
   large=c;
 }
 else{
   large=0;
 }
 return large;
}
void output(int z){
  printf("%d is the largest\n",z);

}
int main(){
  int p,q,r,s;
  input(&p,&q,&r);
  s=cmp(p,q,r);
  output(s);
  return 0;
}

