// 5. Viết chương trình nhận vào điểm tích lũy của 1 sinh viên. Xuất ra màn hình kết 
// quả xếp loại của sinh viên đó dựa trên điểm tích lũy. Biết rằng:
// - Điểm tích lũy từ 9 trở lên xếp loại xuất sắc.
// - Điểm tích lũy từ 8 đến dưới 9 xếp loại giỏi.
// - Điểm tích lũy từ 7 đến dưới 8 xếp loại khá.
// - Điểm tích lũy từ 6 đến dưới 7 xếp loại trung bình khá.
// - Điểm tích lũy từ 5 đến dưới 6 xếp loại trung bình.
// - Điểm tích lũy dưới 5 là yếu.

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int DTB;
    cout << "Nhap diem tich luy: ";
    cin >> DTB;
    if (DTB >= 9)
        cout << "Xep loai xuat sac" << endl;
    else if (DTB >= 8 && DTB <= 9)
        cout << "Xep loai gioi" << endl;
    else if (DTB >= 7 && DTB <= 8)
        cout << "Xep loai kha" << endl;
    else if (DTB >= 6 && DTB <= 7)
        cout << "Xep loai trung binh kha" << endl;
    else if (DTB >= 5 && DTB <= 6)
        cout << "Xep loai trung binh" << endl;
    else
        cout << "Xep loai yeu" << endl;
    system("pause");
    return 0;
}