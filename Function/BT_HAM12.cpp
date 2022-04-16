// 1. Viết hàm kiểm tra 1 giá trị năm nhận vào có phải là năm nhuần hay không. Viết 
// chương trình kiểm tra lại hàm vừa xây dựng. (Xem lại năm nhuần ở bài tập thực hành 
// 3).

#include<iostream>
using namespace std;

void Nhap(int &n)
{
    do
    {
        cout << "Nhap n: ";
        cin >> n;
        if (n < 1)
        {
            cout << "Nhap lai n: ";
        }
    } while (n < 1);
}

bool Nam_Nhuan(int n)
{
    if (n % 400 == 0)
    {
        return true;
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    Nhap(n);
    if (Nam_Nhuan(n))
    {
        cout << "Nam " << n << " la nam nhuan" << endl;
    }
    else
    {
        cout << "Nam " << n << " khong phai la nam nhuan" << endl;
    }
    system("pause");
    return 0;
}