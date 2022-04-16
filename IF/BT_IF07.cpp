// Viết chương trình nhận vào tháng. Xuất ra màn hình số ngày của tháng đó. 
// Giao diện chương trình khi thực hiện được mô phỏng ở 2 ví dụ dưới đây:
// Ví dụ 1:
// Nhap thang: 2
// So ngay cua thang 2 la 28 hoac 29 ngay
// Ví dụ 2:
// Nhap thang: 3
// So ngay cua thang 3 la 31 ngay

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int thang;
    cout << "Nhap thang: ";
    cin >> thang;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "So ngay cua thang " << thang << " la 31 ngay" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "So ngay cua thang " << thang << " la 30 ngay" << endl;
        break;
    case 2:
        cout << "So ngay cua thang " << thang << " la 28 hoac 29 ngay" << endl;
        break;
    default:
        cout << "Khong phai thang trong nam" << endl;
        break;
    }
    system("pause");
    return 0;
}