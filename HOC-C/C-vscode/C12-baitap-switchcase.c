#include<stdio.h>
int main(void){
    int a;

    printf("\n nhao vao so ngay trong tuan: " );
    scanf("%d", &a);

    switch(a){
        case 1: printf(" Monday"); break;
        case 2: printf(" Tuesday "); break;
        case 3: printf(" Wedsday "); break;
         case 4: printf(" Thursday "); break;
          case 5: printf(" Friday "); break;
           case 6: printf(" Sarturday "); break;
            case 7: printf(" Sunday "); break;
            default: printf("not day for"); break;
        
    }
    return 0;
}