#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <typeinfo>

using namespace std;

#define is_number(a) (((a) >= '0') && ((a) <= '9')) // Module sort character or number

bool input_is_number(const char *str) // Module
{
    // While the character pointed-to by 'str' is not a
    // null-character...
    while (*str)
    {
        // ...check if the current character is a number. If it's
        // not, then it's not a number; return false.
        if (!is_number(*str))
            return (false);

        // Otherwise, move onto the next character.
        ++str;
    }

    // All of the characters were digits, so it's obviously
    // a number.
    return (true);
}

// Chương trình con "lọc 4 số cuối ra vì không thể giao dịch"
string extractLastNChars(string const &s, int n)
{
    if (s.size() < n)
    {
        return s;
    }

    return s.substr(s.size() - n);
}

// Chương trình chính
int main()
{
    system("cls");

    string input;
    int inp = 0,count = 0;
    int d500 = 0, d200 = 0, d100 = 0, d50 = 0, d20 = 0, d10 = 0;
    int n = 4;

    do
    { // Vòng lặp: Số tiền không dc dưới 10k đồng
        system("cls");

        cout << "-------------RUT TIEN ATM-------------" << endl;
        cout << endl;
        cout << "Vui long nhap so tien can rut (tien phai lon hon 10000): ";
        cin >> input;

            // Is it a number?
        if (!input_is_number(input.c_str())) 
            {
            cout << "Nhap sai dinh dang (khong duoc nhap chu cai)" << endl;
            sleep(1);
            cout << "Vui long cho 3 giay..." << endl;
            sleep(3);
        }
        else 
        {
            inp = std::stoi(input);
            if (inp < 10000)
            {
                cout << "Nhap sai dinh dang (so tien phai >= 10.000)" << endl;
                sleep(1);
                cout << "Vui long cho 3 giay..." << endl;
                sleep(3);
            }
        }
            
        

    } while (inp < 10000 or !input_is_number(input.c_str() ));

    // Tách 4 số cuối ra làm phần dư => thành tiền chia hết cho 10k
    auto s = to_string(inp);
    
    string r = extractLastNChars(s, n);
    int subtract = stoi(r);
    int money;
    money = inp - subtract;

    // Lọc số tờ tiền theo mệnh giá
    while (money >= 500000)
    {
        d500 = money / 500000;
        money = money % 500000;
        cout << "\nTong so to 500k la: " << d500;
        break;
    }
    while (money >= 200000)
    {
        d200 = money / 200000;
        money = money % 200000;
        cout << "\nTong so to 200k la: " << d200;
        break;
    }
    while (money >= 100000)
    {
        d100 = money / 100000;
        money = money % 100000;
        cout << "\nTong so to 100k la: " << d100;
        break;
    }
    while (money >= 50000)
    {
        d50 = money / 50000;
        money = money % 50000;
        cout << "\nTong so to 50k la: " << d50;
        break;
    }
    while (money >= 20000)
    {
        d20 = money / 20000;
        money = money % 20000;
        cout << "\nTong so to 20k la: " << d20;
        break;
    }
    while (money >= 10000)
    {
        d10 = money / 10000;
        money = money % 10000;
        cout << "\nTong so to 10k la: " << d10;
        break;
    }

    // In tổng số tờ tiền dc giao dịch
    count = d500 + d200 + d100 + d50 + d20 + d10;
    cout << "\nTong so to tien duoc giao dich la: " << count << endl;
    cout << endl;

    // In ra số dư không thể giao dịch
    cout << "Phan so du khong the giao dich: " << subtract << " dong" << endl;
    cout << endl;
    cout << endl;

    system("pause");

    /*
    cout << "Ket qua: "     << r        << typeid(r).name() << endl;
    cout << "Money: "       << inp      << typeid (inp).name() << endl;
    cout << "Money after subtract: " << money << endl;
    */

    return 0;
}