// 13.Viết chương trình nhận vào một dãy số nguyên liên tục và kết thúc bằng tổ hợp 
// phím Ctrl + Z. Sau đó xuất ra màn hình giá trị số lớn nhất, số nhỏ nhất và tổng 
// của các số vừa nhập.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int max = 0;
    int min = 0;
    int sum = 0;
    while (cin >> n)
    {
        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
        sum = sum + n;
    }
    cout << "Gia tri lon nhat la: " << max << endl;
    cout << "Gia tri nho nhat la: " << min << endl;
    cout << "Tong cua cac so vua nhap la: " << sum;
    return 0;
}