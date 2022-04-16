// 1. Viết chương trình nhận vào điểm trung bình 1 môn học của một sinh viên. Xuất 
// ra màn hình thông báo cho biết sinh viên này đậu hay rớt? Biết rằng nếu điểm 
// trung bình từ 5 trở lên là đậu, ngược lại là rớt.

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double DTB;
    cout << "Nhap diem trung binh: ";
    cin >> DTB;
    if (DTB >= 5)
        cout << "\nDau" << endl;
    else
        cout << "\Rot" << endl;
    system("pause");
    return 0;
}