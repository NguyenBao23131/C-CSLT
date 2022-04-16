// 3. Viết hàm tính xy
// (x là số thực, y là số nguyên) và chương trình kiểm tra hàm.

#include<iostream>
using namespace std;

void Tinh_xy(int x, int y)
{
    int kq;
    kq = x * y;
    cout << "Ket qua la: " << kq << endl;
}

int main()
{
    int x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    Tinh_xy(x, y);
    system("pause");
    return 0;
}