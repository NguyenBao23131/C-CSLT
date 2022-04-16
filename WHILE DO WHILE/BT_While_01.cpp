// 1. Viết chương trình nhận vào 1 số nguyên n ( n > 0 ). Tính và xuất ra màn hình kết 
// quả tổng các số từ 1 đến n

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    cout << "Ket qua tong cac so la : " << sum;
    return 0;
}