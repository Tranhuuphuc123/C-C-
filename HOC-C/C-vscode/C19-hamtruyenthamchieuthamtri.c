#include<stdio.h>
/* prototype*/
void hoanVi_1(int a, int b);
void hoanVi_2(int *a, int *b);



int main(){
    int a, b;

    printf("\n enter the num a: ");
    scanf("%d", &a);
    printf("\n enter the num b: ");
    scanf("%d", &b);

    printf("------------------\n");

    printf("\n gia tri ban dau: a = %d va b = %d",a,b);

    // truyền tham trị
    hoanVi_1(a, b);
    printf("\n tham tri: a = %d va b = %d",a, b);    


    // truyền tham chiếu với con trỏ
    hoanVi_2(&a, &b);
    // khai báo &a &b: khai báo tên địa chỉ bố nhớ là a và b có chứa giá trị a và b.
    printf("\n tham chieu: a = %d va b = %d",a,b);
    
  
}

/*ham con*/
void hoanVi_1(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}


void hoanVi_2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

    // *a, *b, *c: chính là giá trị được lưu trong bộ nhớ có địa chỉ tên a, b , c
}



