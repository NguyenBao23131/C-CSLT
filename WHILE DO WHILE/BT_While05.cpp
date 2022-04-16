// 5. Viết chương trình nhận vào 1 số nguyên dương n. Xuất ra màn hình số đảo 
// ngược của n. Ví dụ n là 352 thì số đảo ngược của nó là 253.
// Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 0 thì thông 
// báo nhập sai và cho phép nhập lại cho đến khi nào n > 0 như đề toán yêu cầu thì 
// mới dừng việc nhập để tính toán.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    do
    {
        if (n <= 0)
        {
            cout << "Nhap sai, nhap lai: ";
            cin >> n;
        }
    } while (n <= 0);
    // số đảo ngược
    while (n > 0)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    cout << "Ket qua so dao nguoc la : " << sum << endl;
    system("pause");
    return 0;
}