/* bài tập mảng 1 chiều Thuật toán liệt kê các phần tử thỏa điều kiện trong mảng 1 chiều, Liệt kê các số nguyên tố*/


#include<stdio.h>


// hàm nguyên mẫu prototype
int soNguyenTo(int *arr[], int *x);

// hàm main
int main(){
    int n, i;
    int arr[100];

    do{
        printf("\nenter the n: ");
        scanf("%d", &n);
    }while(n<=1 || n>=100);


    for( i=0; i<n; i++){
        printf("\n>>arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }

    int kt = soNguyenTo(&arr[n],&n);
    for(i=2; i<n;i++){
        if(kt==1){
            printf("so nguyen to: %d", arr[i]);
        }
    }
    return 0;
}



// xây dựng hàm tìm số nguyên tố

int soNguyenTo(int *arr[], int *x){
    for(int *i=0; *i<x-1;*i++){
        if(*arr[i] % 2==0){
            return 0;
        }
    }
    return 1;
}