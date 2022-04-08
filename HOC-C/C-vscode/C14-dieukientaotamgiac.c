// bai toan xet xem toa do ba diem nhap vao co phai la tam giac hay khong dong thoi tinh chu vi va dien tich
#include<stdio.h>
#include<math.h>
int main(){
    float Xa, Ya, Xb, Yb, Xc, Yc;
    float AB, CA, BC;
    float chuVi, dienTich;

    printf(" \n nhap vao toa do diem A: ");
    scanf("%f \t %f", &Xa, &Ya);
    printf("\n Nhap vao toa do diem B: ");
    scanf("%f \t %f", &Xb, &Yb);
    printf("\n nhap vao toa do diem C: ");
    scanf("%f \t %f", &Xc, &Yc);
    printf("------------------\n\n");

    // tinh toan cac canhe

    AB = sqrt(pow(Xa-Xb, 2) + pow(Ya-Yb, 2));
    BC = sqrt(pow(Xb-Xc, 2) + pow(Yb-Yc, 2));
    CA = sqrt(pow(Xc-Xa, 2) + pow(Yc-Ya, 2));

    printf("ca gia tri toa do: %.0f \t %.0f \t %.0f", AB, BC, CA);
    printf("\n\n");

    // dieu kien de la mot tam giac la hai canh bat kỳ cong lai phai lon hon canh con lai
    if(AB+BC>CA && AB+CA>BC && BC+CA>AB){
        printf("day la mot tam giac ABC thoa dieu kien de bai \n");

        // xet dieu kien tam giac can la co 2 canh bat ky bang nhau 
        if(AB == BC || AB==CA || CA==BC){
            printf("day la tam giac can thoa dieu kien de bai \n");
        }else{
            printf("day khong phai la tam giac can vi 3 canh khong bang nhau \n");
        }

        // tinh toan chu vi va dien tich tam giac sau khi thoa dieu kien de bai \n"
        
        chuVi = AB + BC +CA;

        printf("chu vi tam giac la: chuvi = %.2f \n", chuVi);

        float P = chuVi/2;
        dienTich = sqrt(P*(P-AB)*(P-BC)*(P-CA));
        printf("dien tich tam giac la: %.2f \n", dienTich);
    }else{
        printf("day khong phai la tam giac");
    }




    // bai toan xet dieu kien xem 3 canh nhap vao co la mot tam giac khong
/*
    float a, b, c;
    float C, S;

    printf("\n nhap canh a: ");
    scanf("%f", &a);

    printf("\n nhap canh b: ");
    scanf("%f", &b);

    printf("\n nhap canh c: ");
    scanf("%f", &c);
    printf("---------------------------------------------------------------\n");
    // dieu kien de 3 canh la tam gia la tong 2 canh bat ky phai lon hon canh con lai

    if(a+b>c && a+c>b && b+c>a){
        printf("day la tam gia thoa dieu kien de bai\n");
        if(a==b || a==c || c==b){
            printf("day la tam giac can thoa dieu kien de bai\n");
        }else{
            printf("day khong phai la tam giac can");
        }

        C=a+b+c;
        float P=C/2;
        S=sqrt(P*(P-a)*(P-b)*(P-c));

        printf("\n chu vi la: C = %.2f", C);
        printf("\n dien tich la: S = %.2f", S);
    }else{
        printf("day khong phai la tam giac ngao ngo");
    }
*/
   return 0;
}