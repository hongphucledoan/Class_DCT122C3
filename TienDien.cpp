#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define SIZE 100

// void Nhap_TT_KH(ThongTinKhachHang &KH);
// void In_TT_KH(ThongTinKhachHang KH);
// void NhapSoPhanTu(int &n);
// void NhapMang(ThongTinKhachHang KH[SIZE], int n);
// void XuatMang(ThongTinKhachHang KH[SIZE], int n);

struct ThongTinKhachHang
{
    string Ma_KH;
    string HoTen_KH;
    string DiaChi_KH;
    int Chi_so_truoc;
    int Chi_so_sau;
    int Chi_so_tieu_thu;
    int So_tien;
}; typedef struct ThongTinKhachHang KH;

void Nhap_TT_KH(KH &x)
{
    fflush(stdin);
    cout << "Nhap ma khach hang: "; 
    getline(cin, x.Ma_KH);
    cout << "Nhap Ho Ten khach hang: "; 
    getline(cin, x.HoTen_KH);
    cout << "Nhap dia chi khach hang: "; 
    getline(cin, x.DiaChi_KH);
    cout << "Nhap chi so truoc: "; 
    cin >> x.Chi_so_truoc;
    cout << "Nhap chi so sau: "; 
    cin >> x.Chi_so_sau;
}

void In_TT_KH(KH x)
{
    

    cout << "Ma khach hang: " << x.Ma_KH << endl; 
    cout << "Ho Ten khach hang: " << x.HoTen_KH << endl; 
    cout << "Dia chi khach hang: " << x.DiaChi_KH << endl; 
    // cout << "Chi so truoc: " << x.Chi_so_truoc << endl;  
    // cout << "Chi so sau: " << x.Chi_so_sau << endl;
    cout << "Chi so tieu thu: " << x.Chi_so_tieu_thu << endl;
    cout << "So tien phai tra: " << x.So_tien << endl;  
}


void Nhap_DS_KH(KH arr[SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "---------- Nhap thong tin khach hang thu [" << i + 1 << "] ----------" << endl;
        Nhap_TT_KH(arr[i]);
    }
}

void Xuat_DS_KH(KH arr[SIZE], int n)
{
     for (int i = 0; i < n; i++)
    {
        cout << "---------- Thong tin khach hang thu [" << i + 1 << "] ----------" << endl;
        In_TT_KH(arr[i]);
        arr[i].Chi_so_tieu_thu = arr[i].Chi_so_sau - arr[i].Chi_so_truoc;
        arr[i].So_tien = arr[i].Chi_so_tieu_thu * 5000;
    }
}

int main() 
{
    system("cls");

    KH arr[SIZE]; // Khai bao mang 1 chieu chua nhieu KH
    int n;
    cout << "Nhap so luong khach hang: ";
    cin >> n;
    cout << "NHAP DANH SACH KHACH HANG" << endl;
    Nhap_DS_KH(arr,n);
    cout << "XUAT DANH SACH KHACH HANG" << endl;
    Xuat_DS_KH(arr,n);
    // Nhap_TT_KH(KH);
    // In_TT_KH(KH);
    

    return 0;
}
