// 2. Viết chương trình cho người dùng nhập giá trị cho m số nguyên. Tính và xuất 
// tổng các số vừa nhập. Giao diện chương trình khi thực hiện được mô phỏng ở ví 
// dụ sau:
// Ban can bao nhieu so: 3
// Nhap so thu 1: 6
// Nhap so thu 2: 4
// Nhap so thu 3: 2
// Tong 3 so vua nhap la: 12

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap so thu " << i << ": ";
        cin >> i;
        sum = sum + i;
    }
    cout << "Tong " << n << " so vua nhap la: " << sum << endl;
    system("pause");
    return 0;
}