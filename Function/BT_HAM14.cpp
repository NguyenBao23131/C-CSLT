// 4. Viết các hàm sau đây:
// a. Hàm kiểm tra một ký tự có phải là ký tự số hay không?
// b. Hàm kiểm tra một ký tự có phải là ký tự chữ cái hay không?
// c. Chương trình nhận vào một chuỗi (string), xuất kết quả chuỗi vừa nhập có bao 
// nhiêu ký tự số? bao nhiêu ký tự chữ? Lưu ý: sử dụng 2 hàm đã xây dựng ở trên.

#include<iostream>
using namespace std;

void Nhap(char &c)
{
    do
    {
        cout << "Nhap c: ";
        cin >> c;
        if (c < '0' || c > '9')
        {
            cout << "Nhap lai c: ";
        }
    } while (c < '0' || c > '9');
}

int So_So(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int So_Chu(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char c;
    Nhap(c);
    if (So_So(c))
    {
        cout << "C " << c << " la so" << endl;
    }
    else if (So_Chu(c))
    {
        cout << "C " << c << " la chu" << endl;
    }
    else
    {
        cout << "C " << c << " khong phai la so hoac chu" << endl;
    }
    system("pause");
    return 0;
}
