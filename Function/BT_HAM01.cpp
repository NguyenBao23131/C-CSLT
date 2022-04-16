// 1. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
// a. Hàm tính diện tích hình chữ nhật. 
// b. Hàm tính chu vi hình chữ nhật

#include<iostream>
using namespace std;

void S_HCN(double a, double b)
{
    double S;
    S = a * b;
    cout << "Dien tich HCN la: " << S << endl;
}

void C_HCN(double a, double b)
{
    double C;
    C = 2 * (a + b);
    cout << "Chu vi HCN la: " << C << endl;
}

int main()
{
    double a, b;
    cout << "Nhap chieu dai: ";
    cin >> a;
    cout << "Nhap chieu rong: ";
    cin >> b;
    S_HCN(a, b);
    C_HCN(a, b);
    system("pause");
    return 0;
}