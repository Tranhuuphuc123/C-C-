﻿#include<stdio.h>
int main() {
	int a, b;
	a = 5;
	b = 5;


	// dang toan tang a++. ++a

	printf("toan tu tang dang hau to  a++: %d", a++);
	printf("\n");
	//printf("xuat ket qua a sau a kieu hau to: %d", a);
	printf("\n");
    printf("toan tu tang dang tien to ++a: %d", ++a);
	printf("\n");
	// ta thay o dang hau to ban dau a++ thi cau lenh se thuc thi sau khi gia tri dong lenh ket thuc
	// nghia la voi dang phep toan tang hau to a++, thi sau khi kt dong lenh a se xuat ket qua ra trc roi moi thuc hien
	// phep tinh a=a+1, con dang tien to ++a thi no se thuc hien ngay ket qua, do do ly do tai sao ban dau a++ se bang 5
	// va luc sau thi moi t/h phep toan tang, a= a+1 va ra kq 6, con ++a thi voi a=6 no se ra kq lap tuc a=a+1=7(luc nay a=6)


	// dang toan giam a--, --a

	printf("toan tu giam dang hau to b--: %d", b--);
	printf("\n");
	printf("ket qua b sau hau to b: %d", b);
	printf("\n");
	printf ("toan tu giam dang tien to --b: %d", --b);

	return 0;

	/*
		như vậy thì phep toán  giảm dạng hậu tố giống như phép tăng, tất cả dạng hậu tố đều xuất ra kết quả ban đầu trc rồi mới 
		thực thi phép toán giảm b-- (tức b=b-1).Còn dạng tiền tố thì sẽ thực hiện ngay và liền 
		ví dụ đầu vào b=5, thì với dang hậu tố b-- dòng lệnh sẽ xuất b=5 trc rồi mới thục thi b=b-1(b=5-1=4), với giá trị
		b=4 lúc này thì khi khai báo dạng tiền tố --b dòng lệnh sẽ thực thi ngay b=b-1(b=4-1=3) ra đáp án ngay liền.
	*/

}
































