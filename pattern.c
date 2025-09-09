#include<stdio.h>
int main(){
  int num =65;
  for(int i=0;i<4;i++){
    {
    for(int j=3;j>i;j--){
      printf(" ");
    }
    for(int k=0;k<=i;k++){
      printf("%c",num++);
    }
     for(int m=1;m<=i;m++){
      printf("%c",num++);
    }
    printf("\n");
  }
  }}