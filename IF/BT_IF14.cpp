// 14.Viết chương trình nhận vào 3 số nguyên. Xuất ra màn hình 3 số đó được sắp xếp 
// tăng dần

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, temp;
    cout << "Nhap vao 3 so nguyen: ";
    cin >> a >> b >> c;
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    else if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    cout << "Sap xep tang dan: " << a << " " << b << " " << c << endl;
    system("pause");
    return 0;
}