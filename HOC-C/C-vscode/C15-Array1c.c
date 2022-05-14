#include<stdio.h>
int main(){
    // khởi tạo mảng 1 chiều
/*
    int x[10];
    int y[30];
    char c[30];

    // cách khai báo mảng và giá trị ban đầu khai báo cụ thể
    // nên nhớ mảng sã đánh thứ tự từ 0-n, vd ở đây có 3 pt thì sẽ đánh từ 0-1-2.
    int z[3]={0,15,22};

   

    // cách gáng dữ liệu phần tử cho mảng
    z[1]= 100; // được hiểu là thay vị trí số 1 của mảng z[3] tức vị trí 1 là 15 bằng giá trị 100.


     // xuất giá trị mảng ra

    printf("vtri 0- %d \n", z[0]);
    printf("vtri 1- %d \n ", z[1]); // lúc này giá trị vtri1 = 15 ở mảng z[3] sẽ được gáng và thay thế bằng 100.
    printf("vtri 2- %d ", z[2]);
*/



    // cách từ nhập mảng và xuất ra mảng từ bàn phím

    int i, n;

    printf("enter the num n: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("num %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("---------------\n");
    // xuất giá trị từng mảng tránh viết và nhập từng hàng printf dài dòng

    for(i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }




    return 0;
}