/*cùng tiềm hiểu tham chiếu và tham trị thông qua bài tập nhập mảng*/

#include<iostream>
using namespace std;
#define MAX 5


// hàm thay đổi giá trị biến thông qua tham trị
void thayDoiThamTri(int x) {
    x = 10;
}

// hàm thay đổi giá trị biến thông qua tham chiếu
void thayDoiThamChieu(int &x) {
    x = 10;
}

int main() {
    int a = 5;    cout << "Giá trị ban đầu của a: " << a << endl;

    // Gọi hàm thayDoiThamTri với tham trị
    thayDoiThamTri(a);
    cout << "Sau khi gọi hàm thayDoiThamTri, giá trị của a: " << a << endl;

    // Gọi hàm thayDoiThamChieu với tham chiếu
    thayDoiThamChieu(a);
    cout << "Sau khi gọi hàm thayDoiThamChieu, giá trị của a: " << a << endl;

    return 0;
}


/*
 kw:
   - giá trị gốc ban đầu của a ở main là: 5
   - giá trị khi gọi ham thaydoithamtri: 5
   - giá trị khi gọi tham chiếu: 10
   ==> tại sao lại có sự khác nhau, do tham trị là cách truyền tham số trong lập trình, và chỉ
   có thể sao chép và gán cho biến khác. trong đó địa chỉ của biến được truyền nó không lam thay 
   đổi giá trị gốc của biên ban đầu. Nên dù truyền x = 10 thì trong ham main nó vẫn nhận giá trị
   n = 5 do nó không nhẫn diện đc bộ đại chỉ gôc của biến đói số a và tham trị x. 2 bộ địa chỉ gôc #

   ==> còn tham chiếu thì ngc lại nó nhận đối số truyền từ biến x = 10 vào bộ địa chỉ biến a trong main
   nên nó thay đổi a =10. Hiểu rõ hơn là khi khai báo có toán tử địa chỉ gốc là & trong tham số &x của
   function thaydoithamchieu(int &x). Cho nên khi gọi function thaydoithamchieu() với tham số &x, thì 
   trong main nó cũng nhằm hiểu đôi số a truyền vào là đang truyền  bộ địa gốc &a.. nên nó truy đến
   đúng bộ địa chỉ gốc của biến a và gán giấ trị mới thay thế giá trị gốc ban đầu thành công.
*/






