// 6. Viết hàm tính số đảo ngược của một số nguyên dương n. Viết chương trình kiểm tra 
// hàm đã viết

#include<iostream>
using namespace std;

void Tinh_so_dao_nguoc(int n)
{
    int kq;
    kq = n * -1;
    cout << "Ket qua la: " << kq << endl;
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
    Tinh_so_dao_nguoc(n);
    system("pause");
    return 0;
}