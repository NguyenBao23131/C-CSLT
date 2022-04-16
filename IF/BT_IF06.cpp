// 6. Viết chương trình nhận vào năm. Xuất ra màn hình thông báo năm đó là năm 
// nhuần hay năm không nhuần? Biết rằng năm nhuần là năm có 366 ngày. Năm 
// nhuần còn là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 
// 100.

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n;
    cout << "Nhap nam: ";
    cin >> n;
    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        cout << "Nam " << n << " la nam nhuan" << endl;
    else
        cout << "Nam " << n << " khong phai nam nhuan" << endl;
    system("pause");
    return 0;
}