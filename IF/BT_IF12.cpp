// 12.Viết chương trình giải và biện luận phương trình bậc nhất: ax + b = 0.

#include<iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout << "Nhap vao a: ";
    cin >> a;
    cout << "Nhap vao b: ";
    cin >> b;
    if(a == 0)
    {
        cout << "Phuong trinh vo nghiem" << endl;
    }
    else
    {
        x = -b / a;
        cout << "Phuong trinh co nghiem la: " << x << endl;
    }
    system("pause");
    return 0;
}