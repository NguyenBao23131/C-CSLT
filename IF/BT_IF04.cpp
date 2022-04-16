// 4. Viết chương trình nhận vào 2 số nguyên. Xuất ra màn hình kết quả so sánh giữa 
// hai số (số thứ nhất lớn hơn, nhỏ hơn hay hai số bằng nhau)

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    if (a > b)
        cout << "So a lon hon so b" << endl;
    else if (a < b)
        cout << "So a nho hon so b" << endl;
    else
        cout << "So a bang so b" << endl;
    system("pause");
    return 0;
}