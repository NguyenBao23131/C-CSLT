// 6. Viết chương trình nhận vào 1 số nguyên n. Xuất ra màn hình thông báo n có phải 
// là số nguyên tố hay không? Biết rằng số nguyên tố là số từ 2 trở lên, chỉ chia hết 
// cho 1 và cho chính bản thân nó

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int i = 2;
    bool check = true;
    do 
    {
        if (n <=2)
        {
            cout << "Nhap sai, nhap lai: ";
            cin >> n;
        }
    }while (n <= 2);
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            check = false;
            break;
        }
        i++;
    }
    if (check == true)
    {
        cout << "So nguyen n la so nguyen to" << endl;
    }
    else
    {
        cout << "So nguyen n khong phai la so nguyen to" << endl;
    }
    system("pause");
    return 0;
}