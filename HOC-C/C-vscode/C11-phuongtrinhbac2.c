#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,delta;

    printf("\n enter the num a: ");
    scanf("%f",&a);

    printf("\n enter the num b: ");
    scanf("%f",&b);

    printf("\n enter the num c: ");
    scanf("%f", &c);

    printf("--------------phuong trinh bac 2------------- \n");

    if(a==0){
        printf("yeu cau he so a#0");
    }else{
        // mac dinh a!=0
        delta = pow(b, 2) - 4*a*c;
        printf("delta = %.0f \n", delta);

        if(delta>0){
            x1=(-b+sqrt(delta))/2*a;
            x2=(-b-sqrt(delta))/2*a;
            printf("----phuong trinh co 2 nghiem----- \n");
            printf("x1 = %.2f \n",x1);
            printf("x2 = %.2f \n",x2);
        }else if(delta==0){
            x1= -b/(2*a);
            printf("---phuong trinh co nghiem kep---\n");
            printf("x1=x2= %.2f",x1);
        }else{
            printf("phuong trinh vo nghiem yeah");
        }
    }
    return 0;

}