/* bài tập mảng 1 chiều Thuật toán liệt kê các phần tử thỏa điều kiện trong mảng 1 chiều, Liệt kê các số nguyên tố*/


#include<stdio.h>


// hàm nguyên mẫu prototype
int soNguyenTo(int x);
int timMax(int a[], int n);
int timMax(int a[], int n);

// hàm main
int main(){
    int n, i;
    int arr[100];

    do{
        printf("\nenter the n: ");
        scanf("%d", &n);
    }while(n<=1 || n>=100);


    for( i=0; i<n; i++){;
        printf("\n>>arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }

    // printf("so nguyen to: ");
    // for(i=0; i<n;i++){
    //     if(soNguyenTo(arr[i])){
    //         printf(" %d ", arr[i]);
    //     }
    // }


    /*tìm max min*/
    printf("----------------\n");
    printf("\nmax: %d ", timMax(arr, n));
    printf("min: %d ", timMin(arr, n));

}



// xây dựng hàm tìm số nguyên tố

int soNguyenTo(int x){
    if(x<1){
        return 0;
    }
    for(int i=2; i<x-1; i++){
        if(x % i==0){
            return 0;
        }
    }
    return 1;
}

// xấy dựng hàm tìm  max min trong mảng
int timMax(int a[], int n){
    int max =a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max= a[i];
        }
    }
    return max;
}

int timMin(int a[], int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}