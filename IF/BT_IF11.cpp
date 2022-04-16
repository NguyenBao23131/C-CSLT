// /11.Viết chương trình nhận vào 1 số nguyên. Xuất ra màn hình số nguyên đó là số
// âm? Số dương hay số 0 ?
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;
    if(n < 0)
    {
        cout << "\nSo am" << endl;
    }
    else if(n == 0)
    {
        cout << "\nSo 0" << endl;
    }
    else
    {
        cout << "\nSo duong" << endl;
    }
    system("pause");
    return 0;
}