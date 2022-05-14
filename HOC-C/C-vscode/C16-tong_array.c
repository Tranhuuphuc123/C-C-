#include<stdio.h>
int main(){
    int n,i;
 // số phần từ giới hạn từ 0<n<=100
 do{
     printf("enter the num n: ");
     scanf("%d",&n);
 }while (n<1 || n>100);

 int arr[n];

 for(i=0;i<n;i++){
     printf("arr[%d]: ", i);
     scanf("%d", &arr[i]);
 }

 printf("------------\n");

 for(i=0;i<n;i++){
     printf(" %d ", arr[i]);
 }
 printf("\n");

 printf("----tong cac phan tu-----\n");

 int tong=0;

 // cach xuất giá trị và tính tổng chi tiết
 for(i=0;i<n;i++){
     tong +=arr[i];
     if(arr[i]==arr[n-1]){
         printf("%d = %d ", arr[i], tong);
     }else{
         printf("%d + ",arr[i]);
     }
 }
 return 0;
 
    
}