#include<stdio.h>
#include<stdlib.h>
int main(){
//     int n;
//     printf("enter size:");
//     scanf("%d",&n);
//    int*arr=(int *)malloc(n*sizeof(int));
 // printf("Enter %d new elements:\n",newSize);
// for(int i=0;i<newSize;i++)
// scanf("%d",&arr[i]);



// int n[6]={0,0,-2,1,3,45};
// int *arr=(int*)malloc(6 * sizeof(int));
// int j=0;
// for(int i=0;i<n;i++){
//     if(arr[i]==0){
//         arr[j]=arr[i];
//         j++;
//     }
// }for(int i=0;i<n;i++){
//     if(arr[i]<0){
//         arr[j]=arr[i];
//         j++;
//     }
// }for(int i=0;i>n;i--){
//     if(arr[i]>0){
//         arr[j]=arr[i];
//         j++;
//      } }
//     printf("%d",n);


//     int n;
//     printf("enter size:");
//     scanf("%d",&n);
//     int*arr=(int *)malloc(n*sizeof(int));
// printf("\nNow enter new size:");
// int newSize;
// scanf("%d",&newSize);
// arr=(int *)realloc(arr,newSize * sizeof(int));
// printf("Enter %d new elements:\n",newSize);
// for(int i=0;i<newSize;i++)
// scanf("%d",&arr[i]);



    int n;
    printf("enter size:");
    scanf("%d",&n);
   // int*arr=(int *)malloc(n*sizeof(int));
 int*arr=(int *)calloc(n,sizeof(int));
 printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);}