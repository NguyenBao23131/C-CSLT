// 4. Viết chương trình nhận vào 1 số nguyên dương n. Tính và xuất kết quả tính n giai 
// thừa.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int sum = 1;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << "Ket qua tinh giai thua cua " << n << " la: " << sum << endl;
    system("pause");
    return 0;
}