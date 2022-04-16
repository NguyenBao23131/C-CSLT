// 10.Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm xem từ n1 đến n2 có bao nhiêu số chẵn? bao nhiêu số lẻ? bao nhiêu số là ước của 10?
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n1, n2, dem_chan = 0, dem_le = 0, dem_uoc_10 = 0;
    cout << "Nhap so nguyen duong n1: ";
    cin >> n1;
    cout << "Nhap so nguyen duong n2: ";
    cin >> n2;
    if (n1 < n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i % 2 == 0)
            {
                dem_chan++;
            }
            else
            {
                dem_le++;
            }
            if (i % 10 == 0)
            {
                dem_uoc_10++;
            }
        }
        cout << "So chan: " << dem_chan << endl;
        cout << "So le: " << dem_le << endl;
        cout << "So uoc 10: " << dem_uoc_10 << endl;
    }
    else
    {
        cout << "Nhap lai n1 < n2";
    }
    system("pause");
    return 0;
}