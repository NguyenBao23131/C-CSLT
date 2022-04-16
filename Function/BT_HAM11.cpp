// 11.Viết hàm kiểm tra một số nguyên n có phải là số đối xứng (Palindrome) hay không? 
// Viết chương trình kiểm tra hàm vừa viết. Biết rằng số đối xứng là số có số đảo ngược 
// của nó bằng chính nó.

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

int Doi_Xung(int n)
{
    int temp = 0;
    while (n > 0)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp;
}

int main()
{
    int n;
    Nhap(n);
    if (Doi_Xung(n) == n)
    {
        cout << "So " << n << " la so doi xung" << endl;
    }
    else
    {
        cout << "So " << n << " khong phai la so doi xung" << endl;
    }
    system("pause");
    return 0;
}