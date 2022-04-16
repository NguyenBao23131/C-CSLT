// 3. Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất ra màn hình 
// kết quả tổng các số lẻ và tổng các số chẵn trong phạm vi từ 1 đến n.
// Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 1 thì thông 
// báo nhập sai và cho phép nhập lại cho đến khi nào n > 1 như đề toán yêu cầu thì 
// mới dừng việc nhập để tính toán

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int SumEven = 0;
    int SumOdd = 0;
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
        if (n % 2 == 0)
        {
            SumEven += n;
        }
        else
        {
            SumOdd += n;
        }
        n--;
    }
    cout << "Ket qua tong cac so le va tong cac so chan la : " << SumEven << " va " << SumOdd << endl;
    system("pause");
    return 0;
}