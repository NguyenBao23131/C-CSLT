// 3. Viết chương trình nhận vào số nguyên n. Xuất ra màn hình kết quả trị tuyệt đối 
// của số nguyên đó

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Ket qua: " << abs(n) << endl;
    system("pause");
    return 0;
}