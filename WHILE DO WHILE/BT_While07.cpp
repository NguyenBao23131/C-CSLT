// 7. Viết chương trình có giao diện là một menu lựa chọn 1 trong 4 phép tính (+ - * / ) 
// và lựa chọn thoát. Khi người dùng chọn lựa chọn nào sẽ xử lý tương ứng. 
// + Với 4 phép tính thì cho người dùng nhập tiếp 2 số nguyên a và b. Thực hiện 
// phép tính đã chọn với 2 số đó (lưu ý lỗi chia 0 và kết quả phép chia phải làm tròn 
// lấy 2 chữ số thập phân).
// + Với lựa chọn thoát thì sẽ kết thúc chương trình.
// + Sau khi lựa chọn và tính 1 kết quả phép tính tương ứng, chương trình thể hiện 
// lại menu cho người dùng tiếp tục có lựa chọn phép tính hay thoát để kết thúc.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    int choice;
    do
    {
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << "5. Thoat" << endl;
        cout << "\nNhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nNhap a: ";
            cin >> a;
            cout << "Nhap b: ";
            cin >> b;
            cout << "\nKet qua cua phep cong la: " << a + b << endl;
            break;
        case 2:
            cout << "\nNhap a: ";
            cin >> a;
            cout << "Nhap b: ";
            cin >> b;
            cout << "\nKet qua cua phep tru la: " << a - b << endl;
            break;
        case 3:
            cout << "\nNhap a: ";
            cin >> a;
            cout << "Nhap b: ";
            cin >> b;
            cout << "\nKet qua cua phep nhan la: " << a * b << endl;
            break;
        case 4:
            cout << "\nNhap a: ";
            cin >> a;
            cout << "Nhap b: ";
            cin >> b;
            if (b == 0)
            {
                cout << "\nKhong the chia cho 0" << endl;
            }
            else
            {
                cout << "\nKet qua cua phep chia la: " << a / b << endl;
            }
            break;
        case 5:
            cout << "\nThoat chuong trinh" << endl;
            break;
        default:
            cout << "\nLua chon khong hop le" << endl;
            break;
        }
    } while (choice != 5);
    system("pause");
    return 0;
}