// 15.Viết chương trình nhận vào số đo 3 cạnh của 1 tam giác. Kiểm tra xem 3 cạnh đó 
// có hợp lệ hay không? Nếu hợp lệ thì tam giác đó là loại tam giác gì (đều, vuông, 
// cân, vuông cân hay thường) ?

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap vao 3 canh cua 1 tam giac: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            cout << "Tam giac deu" << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Tam giac can" << endl;
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << "Tam giac vuong can" << endl;
        }
        else
        {
            cout << "Tam giac thuong" << endl;
        }
    }
    else
    {
        cout << "Khong hop le" << endl;
    }
    system("pause");
    return 0;
}