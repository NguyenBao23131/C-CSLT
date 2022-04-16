// 6. Viết các hàm sau đây:
// a. void menu(): hiển thị menu gồm 4 phép tính cộng, trừ, nhân, chia
// b. int cong(int a, int b): cộng hai số nguyên
// c. int tru(int a, int b): trừ hai số nguyên.
// d. double chia(int a, int b): chia hai số nguyên.
// e. Chương trình in ra menu, yêu cầu người dùng nhập vào hai số nguyên và chọn 
// phép toán. Sau đó in ra kết quả. Giao diện chương trình có dạng như sau:
// 1. Cong
// 2. Tru
// 3. Nhan
// 4. Chia
// Nhap 2 so nguyen: 4 5
// Chon (1-4): 1
// 4 + 5 = 9
// Tiep tuc (C/K): c
// Nhap 2 so nguyen: 5 2
// Chon (1-4): 4
// 5 / 2 = 2.5
// Tiep tuc (C/K): k

#include<iostream>
using namespace std;

void Menu()
{
    cout << "1. Cong" << endl;
    cout << "2. Tru" << endl;
    cout << "3. Nhan" << endl;
    cout << "4. Chia" << endl;
}

int Cong(int a, int b)
{
    return a + b;
}

int Tru(int a, int b)
{
    return a - b;
}

int Nhan(int a, int b)
{
    return a * b;
}

double Chia(double a, double b)
{
    return a / b;
}

int main()
{
    int a, b;
    char c;
    do
    {
        Menu();
        cout << "Nhap 2 so nguyen: ";
        cin >> a >> b;
        cout << "Chon (1-4): ";
        cin >> c;
        switch (c)
        {
        case '1':
            cout << a << " + " << b << " = " << Cong(a, b) << endl;
            break;
        case '2':
            cout << a << " - " << b << " = " << Tru(a, b) << endl;
            break;
        case '3':
            cout << a << " * " << b << " = " << Nhan(a, b) << endl;
            break;
        case '4':
            cout << a << " / " << b << " = " << Chia(a, b) << endl;
            break;
        default:
            cout << "Nhap lai c: ";
            break;
        }
        cout << "Tiep tuc (C/K): ";
        cin >> c;
    } while (c == 'c' || c == 'C');
    system("pause");
    return 0;
}