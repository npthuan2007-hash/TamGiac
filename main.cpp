#include "TAMGIAC.h" 
#include <iostream>

using namespace std;

int main() {
    cTAMGIAC tg;
    tg.nhapTamGiac();
    
    if(!tg.kiemTra()) {
        tg.kiemTra();
    }
        cout << "Tam giac vua nhap la: \n";
        tg.xuatTamGiac();
        cout << "Phan loai tam giac: \n";
        cout << tg.phanLoai();
        cout << "Chu vi: \n"; cout << tg.tinhChuVi();
        cout << "\nDien tich: \n"; cout << tg.tinhDienTich();
        cout << "\nNhap toa do so tinh tien: \n";
        float dx; cin >> dx;
        float dy; cin >> dy;
        tg.tinhTien(dx,dy);
        cout << "Tam giac sau khi tinh tien: \n";
        tg.xuatTamGiac();
        cout << "\nNhap so do goc quay (rad): "; 
        float x; cin >> x;
        tg.quayGoc(x);
        cout << "Tam giac sau khi quay goc: \n";
        tg.xuatTamGiac();
        cout << "Nhap he so phong to: \n";
        int hspt; cin >> hspt;
        cout << "Tam giac sau khi phong to: \n";
        tg.phongTo(hspt);
        tg.xuatTamGiac();
        cout << "\nNhap he so thu nho: ";
        int hstn; cin >> hstn;
        tg.thuNho(hstn);
        tg.xuatTamGiac();
}