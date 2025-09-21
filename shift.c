#include<stdio.h>
int main(){
    // int arr[5]={10,20,30,40,50};
    // int first=arr[0];
    // for(int i=0;i<5;i++){
    //     arr[i]=arr[i+1];
    // }
    // arr[4]=first;
    // for(int k=0;k<5;k++){
    //     arr[4]=10;
    // printf("%d",arr[k]);
    // }


//    int arr[5]={1,2,3,2,1};
//    int isTrue=1;
//    for (int i=0;i<5/2;i++);
//    {
//     if(arr[i]!=arr[5-i-1]){
//         isTrue=0;
//     }
//    }if(isTrue==1){
//     printf("it is true");
//    }else
//      printf("it is no t true");  


int arr[6]={2,3,-4,5,-7};
int maxSum=arr[0];


for(int i=0;i<6;i++){
  int currSum=0;
  for (int j=i;j<6;j++){
    currSum=currSum+arr[j];
    
  }
if(currSum>maxSum){
    maxSum=currSum;
}
}
 printf("%d",maxSum);
}


