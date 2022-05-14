#include<stdio.h>
#include<math.h>

//>> hàm nguyên mẫu prototype<<<
int timNgayTrongThang( int thang, int nam);
int demNgayTrongNam(int ngay, int thang, int nam);
void timNgayDungTruoc(int ngay, int thang, int nam);
void timNgayDungSau(int ngay, int thang, int nam);


/*>> chương trinhf chính hàm main()<<*/
int main(){
    int day,month, year;
    do{
        printf("nhap day-month-year: ");
        scanf("%d %d %d", &day, &month, &year);
    }while(day<1 || day>31 || month<1 || month >12 || year<1);

    printf("----------------------\n");

    int kt = timNgayTrongThang(month, year);
    if(month == 2 && kt == 29){
        printf(" >> nam %d la nam nhuan: thang %d co %d ngay", year,month, kt);
    }else if(month == 2 && kt==28){
        printf(" >> nam %d la nam khong nhuan: thang %d co %d ngay", year,month, kt);
    }else{
        printf(" >> nam %d: thang %d co %d ngay",year,month, kt );
    }

    printf("\n");
    printf(" >> tong so ngay trong nam %d la: %d", year, demNgayTrongNam(day,month,year));

    timNgayDungTruoc(day,month,year);
    timNgayDungSau(day, month, year);

    return 0;
    
    
}



/*>>Phần khai báo các hàm con<<*/

// tim thang co bao nhieu ngay
int timNgayTrongThang( int thang, int nam){
    switch(thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
               return 31;
        case 4:
        case 6:
        case 9:
        case 11:
               return 30;
        case 2:
             if((nam%400==0) || (nam%4==0) || (nam%100!=0)){
                 return 29;
             }else{
                 return 28;
             }

             // cách khai báo khác là: return ((nam%400==0) || (nam%4==0) || (nam%100!=0))?29:28;
        default:
          return -1;  // trường hợp các giá trị nằm ngoài các tháng quy định trong năm.
    }
}


// đếm tổng số ngày trong năm đó là ngày thứ bao nhiêu
int demNgayTrongNam(int ngay, int thang, int nam){
    int demNgay = 0;
    for(int i=1; i<thang;i++){
        demNgay += timNgayTrongThang(i,nam);// do vòng lặp tình từ tháng bắt đầu tới dưới tháng đã nhập nên cần thay thang bang i
    }
    demNgay += ngay;
    return demNgay;
}

// đếm ngày trước ngày tháng năm đã nhập
void timNgayDungTruoc(int ngay, int thang, int nam){
    if(ngay == 1){
        if(thang==1){
            ngay=31;
            thang=12;
            nam--;
        }else{
            thang--;
            ngay=timNgayTrongThang(thang,nam);
        }
    }else{
        ngay--;
    }
    printf("\n >> Ngay dung truoc ngay da nhap: %d-%d-%d", ngay, thang, nam);
}


void timNgayDungSau(int ngay, int thang, int nam){
     if(ngay == 31){
        if(thang==12){
            ngay=1;
            thang=1;
            nam++;
        }else{
            thang++;
            ngay=1;
        }
    }else if((ngay==29 || ngay==28)&& thang==2){
        ngay=1;
        thang++;
    }
    printf("\n >> Ngay dung sau ngay da nhap: %d-%d-%d", ngay, thang, nam);
}