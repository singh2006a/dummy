#include<stdio.h>
int main(){
    // int arr[]={4,5,3,4,5};
    // int xor=0;
    // for(int i=0;i<5;i++){
    //     xor=xor^arr[i];
    // }
    // printf("%d",xor);


//     int a=5;
//     int b=3;
//      a=a^b;
//      a=a^b;
//      a=a^b;
//   int s=a^b;
// printf("%d",s);


int arr[4]={1,2,4,5};
int xor=0;
int xor1=0;
for(int i=1;i<=5;i++){
   xor=xor^i;
}
   for(int i=0;i<4;i++){
    xor1=xor1^arr[i];
   }
   printf("%d",xor^xor1);}