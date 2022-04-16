// 5. Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm và xuất 
// kết quả xem từ n1 đến n2 có bao nhiêu số là số nguyên tố? Biết rằng số nguyên 
// tố là số từ 2 trở lên, chỉ chia hết cho 1 và chính bản thân nó.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1, n2;
    int count = 0;
    cout << "Nhap so nguyen duong n1: ";
    cin >> n1;
    cout << "Nhap so nguyen duong n2: ";
    cin >> n2;
    for (int i = n1; i <= n2; i++)
    {
        int flag = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
    }
    cout << "So nguyen to trong khoang " << n1 << " den " << n2 << " la: " << count << endl;
    system("pause");
    return 0;
}