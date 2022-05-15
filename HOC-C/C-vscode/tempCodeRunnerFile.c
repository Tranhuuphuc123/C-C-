#include<stdio.h>
/* prototype*/
// void hoanVi_1(int a, int b);
// void hoanVi_2(int &a, int &b);
// void hoanVi_3(int *a, int *b);

int main(){
    int a, b;

    printf("\n enter the num a: ");
    scanf("%d", &a);
    printf("\n enter the num b: ");
    scanf("%d", &b);

    printf("------------------\n");

    // printf("\n gia tri ban dau: a = %d va b = %d",a,b);

    // truyền tham trị
    hoanVi_1(a, b);
    


    // truyền tham chiếu
    hoanVi_2(a, b);
    
    // con trỏ

    hoanVi_3(&a, &b);
    

/*ham con*/
void hoanVi_1(int a, int b){
    printf("\n gia tri ban dau: a = %d va b = %d",a,b);
    int temp=a;a=b;b=temp;
    printf("\n tham tri: a = %d va b = %d",a, b);

}

void hoanVi_2(int &a, int &b){
    printf("\n gia tri ban dau: a = %d va b = %d",a,b);
    int temp=a;a=b;b=temp;
    printf("tham chieu: a = %d va b = %d",a,b);

}

void hoanVi_3(int *a, int *b){
    printf("\n gia tri ban dau: a = %d va b = %d",a,b);
    int temp = *a; *a = *b; *b = temp;
    printf(" con tro: a = %d va b = %d ", a, b);
}
}

