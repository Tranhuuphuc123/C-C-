// BÀI NÀY ta sẽ tìm hiểu về điều kiện if- if else - if else if
// thông qua các bài tập sau

// điều kiện if
#include<stdio.h>
int main(){
 /*   int a;
     printf("enter the num a: ");
     scanf("%d", &a);
     printf("\n");

     if(a>=5){
         printf("ban du diem vuot qua ky thi: ");
     }
     
 


 // bai 02 có else 
   /* int a;
    printf("enter the num a: ");
    scanf("%d", &a);
    printf("\n");

    if(a%2==0){
        printf("so nhap la so chan");
    }else{
        printf("so nhap la so le");
    }*/


    // bai 03 if else if

    int a;
    printf("enter the num a: ");
    scanf("%d", &a);
    printf("\n");

    if(a%2==0){
        printf("so ban nhap la chan ");
    }else if(a%2==1){
        printf("so ban nhap la le");
    }
    return 0;
}
