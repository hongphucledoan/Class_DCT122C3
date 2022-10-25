#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, delta;

    cout << "TINH TOAN PHUONG TRINH BAC 2" << endl;
    cout << "--------------------------------"  << endl;
    cout << "" << endl;
    cout << "Vui long nhap he so a, b, c: ";
    cin >> a >> b >> c;
    delta = b*b - 4*a*c; 
    cout << "----------------ANS----------------" << endl;
    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "May dua voi tao day a?!";
            }

            else {
                x1 = c;
                cout << "x = c = " << x1 << endl;
            }
        }
        else {
            x1 = (-c/b);
            cout << "Phuong trinh bac 2 khuyet a se tro thanh phuong trinh bac 1" << endl;
            cout << "x = " << x1 << endl;
        }
    }

    else {

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            cout << "Phuong trinh co 2 nghiem phan biet." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }

        else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep." << endl;
            x1 = -b/(2*a);
            if (x1 == 0) {
                
                cout << "x1 = x2 = 0" << endl;    
                
                }
            else {

                cout << "x1 = x2 = " << x1 << endl;
            }
        }

        else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }

    return 0;
}