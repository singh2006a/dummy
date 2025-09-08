// #include<stdio.h>
// int main(){
//     for(int i =0;i<3;i++){
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d",j);
//             /* code */
//         }
//          printf("\n");
//     }
// }

//IN NEW LINE RESULT
// #include<stdio.h>
// int main(){
//     for(int i =0;i<3;i++){
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\n",j);
//             /* code */
//         }
        
//     }
// }


//PRINTING THE STAR

// #include<stdio.h>
// int main(){
//     for(int i =0;i<3;i++){
//         for (int j = 0; j < 3; j++)
//         {
//             printf("*");
//             /* code */
//         }
        
//     }
// }


// PRINTING THE STAR IN NEXT LINE


// #include<stdio.h>
// int main(){
//     for(int i =0;i<6;i++){
//         // printf("*");
//         for (int j = 0; j >i; j--)
//         {
//             printf(" * ");
//             /* code */
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=5;i>0;i--){
//         for(int j=0;j<i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
        printf(" ");
    }
    for(int k=3;k>i;k--){
        printf("*");
    }
    printf("\n");
}}
