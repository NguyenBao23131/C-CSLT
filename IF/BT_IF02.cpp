// 2. Viết chương trình tìm số lớn nhất của 2 số nguyên a và b

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int a, b;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    if(a > b)
        cout << "So lon nhat la: " << a << endl;
    else
        cout << "So lon nhat la: " << b << endl;
    system("pause");
    return 0;
}