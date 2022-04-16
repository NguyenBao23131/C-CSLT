// 9. Viết chương trình nhận vào 1 số nguyên dương n (n > 0). Xuất ra màn hình bảng 
// cửu chương ứng với số nguyên n. Ví dụ n = 3 thì kết quả xuất ra màn hình:
// 3 x 1 = 3
// 3 x 2 = 6
// …
// 3 x 10 = 30

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    system("pause");
    return 0;
}