// 10.Viết chương trình nhận vào 1 số nguyên. Xuất ra màn hình số nguyên đó là số
// chẵn hay số lẻ.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "So " << n << " la so chan" << endl;
    }
    else
    {
        cout << "So " << n << " la so le" << endl;
    }
    system("pause");
    return 0;
}