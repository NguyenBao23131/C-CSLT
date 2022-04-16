// 2. Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất tích các số lẻ
// trong phạm vi từ 1 đến n.
// Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 1 thì thông 
// báo nhập sai và cho phép nhập lại cho đến khi nào n > 1 như đề toán yêu cầu thì 
// mới dừng việc nhập để tính toán

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int tich = 1;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    do
    {
        if (n <= 1)
        {
            cout << "Nhap sai, nhap lai: ";
            cin >> n;
        }
    } while (n <= 1);
    while (n > 1)
    {
        if (n % 2 != 0)
            {
                tich *= n;
            }
        n--;
    }
    cout << "Ket qua tich cac so le la : " << tich << endl;
    system("pause");
    return 0;
}