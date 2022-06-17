/*đô dộ dài chuỗi, đếm khoảng trắng ký tự,... */
#include<stdio.h>
#include<string.h>
/*hàm nguyên mẫu prototype*/
int demKyTu(char x[]);
int demKhoangTrang(char y[]);
void daoChuoi(char z[]);
int demAm(char k[]);

int main(){
    char chuoi[50];
    printf("nhap vao chuoi: ");
    gets(chuoi);

    printf("\nten chuoi: %s", chuoi);
    printf("\ndo dai la: %d",demKyTu(chuoi));
    printf("\nso khoang trang la: %d", demKhoangTrang(chuoi));


    // dao chuoi
    daoChuoi(chuoi);
    printf("\ndao chuoi: %s",chuoi);
    printf("\n");
    // đếm phụ nguyên âm
   demAm(chuoi);
    
}

/*hàm con*/
// hàm đếm ký tự

int demKyTu(char x[]){
    int count = 0;
    while(x[count] !='\0'){
        count++;
    }
    return count++;
}


int demKhoangTrang(char y[]){
    int count = 0;
    for(int i=0; i<demKyTu(y);i++){
        if(y[i]==' '){
            count ++;
        }
    }
    return count++;
}


// void xoaXuongDong(char x[]){
// 	size_t len = strlen(x);
// 	// TITV\n\0 => TITV\0\0
// 	if(x[len-1]=='\n'){
// 		x[len-1]='\0';
// 	}
// }

void daoChuoi(char z[]){
	size_t len = demKyTu(z);
	for(int i=0; i<len/2; i++){
		char temp = z[i];
		z[i]=z[len-i-1];
		z[len-i-1] = temp;
	}
}

// hàm đếm nguyên âm và phụ âm
int demAm(char k[]){
    int i =0;
    int nguyenAm =0;
    int phuAm =0;
    while(k[i++] != '\0'){
        if(k[i] == 'a' || k[i] =='o' || k[i]=='e' || k[i]=='u' || k[i]=='i'){
            nguyenAm++;
        }else{
            phuAm++;
        }
    }

    printf("chuoi tren co nguyem am: %d  va phu am : %d", k,nguyenAm, phuAm);

}