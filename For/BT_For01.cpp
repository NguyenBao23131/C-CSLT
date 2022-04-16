// 1. .Viết chương trình nhận vào 1 số nguyên dương n (n > 0). Tính và xuất tổng các 
// số từ 1 đến n.
// Ví dụ: n = 4 thì kết quả là 10

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0;    
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;
    system("pause");
    return 0;
}