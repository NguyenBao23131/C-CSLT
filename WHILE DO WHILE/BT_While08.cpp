// 11.Viết chương trình nhận vào 1 số ở dạng nhị phân. Xuất ra màn hình kết quả số đó 
// chuyển qua hệ thập phân.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nhi phan: ";
    cin >> n;
    int i = 0;
    int s = 0;
    while (n != 0)
    {
        s = s + n % 10 * pow(2, i);
        n = n / 10;
        i++;
    }
    cout << "So nhi phan " << n << " chuyen sang he thap phan la: " << s;
    return 0;
}