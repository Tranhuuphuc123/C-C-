#include<stdio.h>
int main(){
    int a,b;

    printf("enter the num a: ");
    scanf("%d",&a);
    printf("\n");

    printf("enter the num b: ");
    scanf("%d",&b);
    printf("\n");

    float lamTron = a/b;

    printf("\n ham ceil(a/b): %.2f", ceil(lamTron));
    printf("\n ham floor(a/b): %.2f", floor(lamTron));

    printf("\n sqrt(a): %.2f", sqrt(a));// sqrt*a) %f vi can bac hai co the xuat hien thap phan

    printf("\n %d^2: %.0f", a,pow(a,2));// so di pow(a,2) laf %f vi luc nay a da ep kieu sang float

    printf("\n |-%d|: %d", a, abs(-a));

    return 0;
}
