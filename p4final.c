#include<stdio.h>
int input_size_array(){
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n]){
  for(int i=0;i<n;i++){
    printf("enter the number\n");
    scanf("%d",&a[i]);
  }

}
int sum(int n,int a[n]){
  int sum=0;
   for(int i=0;i<n;i++){
     sum+=a[i];
   }
   return sum;
}
void output(int n,int a[n],int sum){
   for(int i=0;i<n-1;i++){
     printf("%d+",a[i]);
   }
   printf("%d is %d\n",a[n-1],sum);
   }
   int main(){
    int n=input_size_array();
    int a[n];
     input_array(n,a);
   int p= sum(n,a);
    output(n,a,p);
    return 0;

   }