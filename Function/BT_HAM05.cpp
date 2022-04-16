// 5. Viết hàm nhận vào số đo cạnh, xuất ra hình vuông gồm các dấu * và chương trình để
// kiểm tra hàm.

#include<iostream>
using namespace std;

void Hinh_vuong(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
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
    system("pause");
    return 0;
}