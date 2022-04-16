// 9. Viết hàm tính tổng các chữ số của số nguyên n; và chương trình để kiểm tra hàm đã 
// viết.

#include<iostream>
using namespace std;

int Tong_chu_so(int n)
{
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    do
    {
        if (n < 1)
        {
            cout << "Nhap lai n: ";
            cin >> n;
        }
    } while (n < 1);
    cout << "Tong cua cac chu so cua " << n << " la: " << Tong_chu_so(n) << endl;
    system("pause");
    return 0;
}