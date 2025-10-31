#include<stdio.h>
//void sum(int a){
//     if(a==0){
//         return 0;
//     }
//     sum(a-1);
//     printf("%d",a);
// }int main(){
//     sum(5);



//     if(a==0){
//         return 0;
//     }
//      printf("%d",a);
//     sum(a-1);
// }int main(){
//     sum(5);



// int sum(int a){
// if(a==0){
//     return 0;
// }
// return a+sum(a-1);
// }
// int main(){
//     int data=sum(5);
//     printf("%d",data);


// int fact(int a){
//     if(a==0 || a==1){
//         return 1;
//     }
//     return a*fact(a-1);
// }
// int main(){
//     int data=fact(5);
//     printf("%d",data);



// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*power(x,n-1);
// }
// int main(){
//     int data=power(2,3);
//     printf("%d",data);


int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
    }
    int main(){
    int arr[3]={1,2,3};
    int n=3;
    int data=sum(arr,n);
    printf("%d",data);
}