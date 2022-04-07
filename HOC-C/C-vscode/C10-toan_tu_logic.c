#include<stdio.h>
int main(){
    int a = 1;
    int b = 0;
    int c = 1;

    printf("\n so sanh %d && %d: %d (nghia la %s)", a,b,a&&b, (a&&b)==1?"true":"false");
    printf("\n so sanh %d && %d: %d (nghia la %s) ",a,c,a&&c, (a&&c)==1?"true":"false");

    printf("\n so sanh or: %d || %d: %d (nghia la %s)",a,b,a||b, (a||b)==1?"true":"false");
    printf("\n so sanh or %d || %d: %d (nghia la %s)",a,c,a||c, (a||c)==1?"true":"false" );

    printf("\n phu dinh a: %d",!a);

    return 0;
}
