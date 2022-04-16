// 7. Viết hàm kiểm tra 1 số nguyên n có phải là số nguyên tố hay không? Hàm sẽ trả về
// true nếu n là số nguyên tố, trả về false nếu n không là số nguyên tố. Viết chương trình 
// kiểm tra hàm đã viết.

#include<iostream>
using namespace std;

bool KTNT(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }
    if (dem == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (KTNT(n))
    {
        cout << "So " << n << " la so nguyen to" << endl;
    }
    else
    {
        cout << "So " << n << " khong phai la so nguyen to" << endl;
    }
    system("pause");
    return 0;
}