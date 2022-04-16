// 2. Viết hàm tìm ước chung lớn nhất của 2 số nguyên dương bằng thuật giải Euclid.
// Thuật giải Euclid:
// - Nhận vào: 2 số nguyên dương m và n.
// - Trả về: ước chung lớn nhất của m và n.
// - Thuật giải:
// o Bước 1: nếu n = 0 thì kết quả là m và kết thúc. Ngược lại sang bước 2.
// o Bước 2: tính số dư r của phép chia m cho n.
// o Bước 3: gán n cho m, r cho n. Quay lại bước 1.
// Viết chương trình nhận vào 1 phân số (gồm tử số và mẫu số), xuất kết quả rút gọn 
// của phân số (dùng hàm ước chung lớn nhất vừa xây dựng).

#include<iostream>
using namespace std;

void Nhap(int &a, int &b)
{
    do
    {
        cout << "Nhap a: ";
        cin >> a;
        if (a < 1)
        {
            cout << "Nhap lai a: ";
        }
    } while (a < 1);
    do
    {
        cout << "Nhap b: ";
        cin >> b;
        if (b < 1)
        {
            cout << "Nhap lai b: ";
        }
    } while (b < 1);
}

int UCLN(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return UCLN(b, a % b);
    }
}

int main()
{
    int a, b;
    Nhap(a, b);
    cout << "UCLN cua " << a << " va " << b << " la: " << UCLN(a, b) << endl;
    system("pause");
    return 0;
}