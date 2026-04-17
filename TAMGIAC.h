#ifndef TAMGIAC_H
#define TAMGIAC_H

#include <iostream>
#include <string>
using namespace std;
class cDiem {
private:
    float x,y;
public:
    cDiem(float x = 0, float y = 0);
    void nhapDiem( string tenDinh);
    void xuatDiem() const;
    float getX();
    float getY();
    float timKhoangcach(cDiem) const;
    void tinhTien(float dx, float dy);
    void phongTo(int heSoPT);
    void thuNho(int heSoTN);
    void quayGoc(float gocRad);
};

class cTAMGIAC : cDiem {
private: 
    cDiem A, B, C;
public:
    cTAMGIAC();
    cTAMGIAC(cDiem A, cDiem B, cDiem C);
    void nhapTamGiac();
    void xuatTamGiac() const;
    bool kiemTra() const;
    std:: string phanLoai() const;
    float tinhChuVi() const;
    float tinhDienTich() const;
    void quayGoc(float gocRad);
    void tinhTien(float dx, float dy) ;
    void phongTo(int heSoPT);
    void thuNho(int heSoTN);

};


#endif