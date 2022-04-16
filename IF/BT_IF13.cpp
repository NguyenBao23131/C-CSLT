// 13.Viết chương trình giải và biện luận phương trình bậc hai: ax
// 2 + bx + c = 0.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    double x1, x2, x, delta;
    cout << "Nhap vao a: ";
    cin >> a;
    cout << "Nhap vao b: ";
    cin >> b;
    cout << "Nhap vao c: ";
    cin >> c;
    delta = b * b - 4 * a * c;
    if(delta < 0)
    {
        cout << "Phuong trinh vo nghiem" << endl;
    }
    else if(delta == 0)
    {
        x = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep la: " << x << endl;
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co 2 nghiem phan biet la: " << x1 << " va " << x2 << endl;
    }
    if(a == 0)
    {
        x = -c / b;
        cout << "Phuong trinh vo so nghiem" << endl;
    }
    system("pause");
    return 0;
}