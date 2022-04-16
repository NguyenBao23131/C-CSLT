// 4. Viết các hàm sau đây và viết chương trình kiểm tra các hàm đã viết:
// a. Hàm tính tổng các số từ 1 đến n (n là số nguyên dương). 
// b. Hàm tính n! (n là số nguyên dương)

#include<iostream>
using namespace std;

void Tong(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Tong cua cac so tu 1 den " << n << " la: " << sum << endl;
}

void Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial cua " << n << " la: " << fact << endl;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    do
    {
        if(n < 1)
        {
            cout << "Nhap lai n: ";
            cin >> n;
        }
    }while (n < 1);
    cout << "________________________________________" << endl;
    Tong(n);
    cout << "________________________________________" << endl;
    Factorial(n);
    system("pause");
    return 0;
}
