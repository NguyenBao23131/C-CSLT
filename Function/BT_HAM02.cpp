// 2. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
// a. Hàm tìm số lớn nhất giữa 2 số nguyên.
// b. Hàm tìm số lớn nhất giữa 3 số nguyên.

#include<iostream>
using namespace std;

void Tim_Max(int a, int b)
{
    if (a > b)
    {
        cout << "So lon nhat giua 2 so la: " << a << endl;
    }
    else
    {
        cout << "So lon nhat giua 2 so la: " << b << endl;
    }
}

void Tim_Max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "So lon nhat giua 3 so la: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "So lon nhat giua 3 so la: " << b << endl;
    }
    else
    {
        cout << "So lon nhat giua 3 so la: " << c << endl;
    }
}

int main()
{
    int a, b;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    Tim_Max(a, b);
    int c;
    cout << "Nhap so thu ba: ";
    cin >> c;
    Tim_Max(a, b, c);
    system("pause");
    return 0;
}