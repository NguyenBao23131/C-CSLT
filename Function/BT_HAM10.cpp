// 10.Viết hàm kiểm tra một số nguyên n có phải là số hoàn thiện hay không? Viết chương 
// trình kiểm tra hàm vừa viết. Biết rằng số hoàn thiện là số có tổng các ước số (kể cả 1) 
// bằng chính nó. Ví dụ: 6 là số hoàn thiện vì 6 = 1 + 2 + 3 (1, 2, 3 là các ước của 6)

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

int Tong_Uoc(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    Nhap(n);
    if (Tong_Uoc(n) == n)
    {
        cout << "So " << n << " la so hoan thien" << endl;
    }
    else
    {
        cout << "So " << n << " khong phai la so hoan thien" << endl;
    }
    system("pause");
    return 0;
}
