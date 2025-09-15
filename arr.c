#include<stdio.h>
int main(){
//     int arr[5]={1,2,4};
//     for(int i=0;i<3;i++){
//         printf("%d",arr[i]);
//     }
// }


// int arr[5]={1,2,4};
// for(int i=2;i>=0;i--){
//     printf("%d",arr[i]);
// }


// int arr[5]={1,2,3,4};
// int sum=0;
// for(int i=0;i<4;i++){
//     sum=sum+arr[i];
// }
//  printf("%d",sum);

int arr[5]={1,2,3,4};
int max=arr[0];
for(int i=0;i<4;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
    printf("%d",max);
} 

