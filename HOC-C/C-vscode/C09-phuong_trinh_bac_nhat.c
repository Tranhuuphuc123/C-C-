#include<stdio.h>
int main(){
    float a,b,x;

    printf("\n phuong trinh bac nhat ax+b=0: ");
    printf("\n enter the num a: ");
    scanf("%f", &a);
    printf("\n enter the num b: ");
    scanf("%f", &b);

    if(a!=0){
        x=-b/a;
        printf("\n phuong trinh co 1 nghiem: x = -%.0f/%.0f= %.1f",b,a, x);
    }else if(b==0){
        printf("phuong trinh co vo so nghiem ");
    }else{
        printf("phuong trinh vo nghiem ");
    }
    return 0;
}
