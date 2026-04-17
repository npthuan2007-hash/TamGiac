#include "TAMGIAC.h"
#include <math.h>
using namespace std;


const float EPSILON = 1e-4;
bool bangNhau(float a, float b) {
    return abs(a - b) < EPSILON;
};
cDiem::cDiem(float _x, float _y) {
    x = _x;
    y = _y;
}
void cDiem:: nhapDiem(string tenDiem) {
    cout << "Nhap toa do x va y cho " << tenDiem;
    cin >> x >> y;
}
void cDiem:: xuatDiem() const {
    cout << "(" << x << "; " << y << ")" << "\n";
}
float cDiem:: getX() {
    return x;
}
float cDiem:: getY() {
    return y;
}
float cDiem:: timKhoangcach(cDiem d) const {
    return sqrt((x - d.x)*(x - d.x) + (y - d.y) * (y - d.y));
}
void cDiem::tinhTien(float dx, float dy) {
    float newX = x + dx;
    float newY = y + dy;
    x = newX;
    y = newY;
}
void cDiem:: quayGoc(float gocRad) {
    float newX = x*cos(gocRad) - y*sin(gocRad);
    float newY = y*cos(gocRad) + y*cos(gocRad);
    x = newX;
    y = newY;
}
void cDiem:: phongTo (int heSoPT) {
    float newX = x * heSoPT;
    float newY = y * heSoPT;
    x = newX;
    y = newY;
}
void cDiem:: thuNho (int heSoTN) {
    float newX = x / heSoTN;
    float newY = y / heSoTN;
    x = newX;
    y = newY;
}


cTAMGIAC::cTAMGIAC(){}
void cTAMGIAC:: nhapTamGiac() {
    A.nhapDiem("A");
    B.nhapDiem("B");
    C.nhapDiem("C");
}
void cTAMGIAC:: xuatTamGiac () const {
    cout << "Tam giac A"; A.xuatDiem();
    cout << "B"; B.xuatDiem();
    cout << "C"; C.xuatDiem();
}
bool cTAMGIAC :: kiemTra() const {
    float a = A.timKhoangcach(C);
    float b = B.timKhoangcach(C);
    float c = A.timKhoangcach(B);
    return (a + b > c) && (a + c > b) && (b + c > a);
}
string cTAMGIAC:: phanLoai() const {
    if(!kiemTra()) return "Khong phai la tam giac!\n";
    float a = A.timKhoangcach(C);
    float b = B.timKhoangcach(C);
    float c = A.timKhoangcach(B);
    bool vuong = bangNhau(a*a + b*b, c*c) || bangNhau(a*a + c*c, b*b) || bangNhau(b*b + c*c, a*a);
    bool can = bangNhau(a,b) || bangNhau(a,c) || bangNhau(b,c);
    if (bangNhau(a,b) && bangNhau(b,c)) return "Tam giac deu\n";
    else if (vuong && can) return "Tam giac vuong can\n";
    else if (vuong) return "Tam giac vuong\n";
    else if (can) return "Tam giac can\n";
    else return "Tam giac thuong\n";
}
float cTAMGIAC:: tinhChuVi() const {
    return A.timKhoangcach(B) + A.timKhoangcach(C) + B.timKhoangcach(C);
}
float cTAMGIAC:: tinhDienTich() const {
    float nuaChuVi = tinhChuVi() / 2;
    return sqrt(nuaChuVi*(nuaChuVi - A.timKhoangcach(B))*(nuaChuVi - A.timKhoangcach(C))*(nuaChuVi - B.timKhoangcach(C)));
}
void cTAMGIAC:: tinhTien (float dx, float dy) {
    A.tinhTien(dx,dy);
    B.tinhTien(dx, dy);
    C.tinhTien(dx, dy);
}
void cTAMGIAC:: phongTo (int heSoPT) {
    A.phongTo(heSoPT);
    B.phongTo(heSoPT);
    C.phongTo(heSoPT);
}
void cTAMGIAC:: thuNho (int heSoTN) {
    A.thuNho(heSoTN);
    B.thuNho(heSoTN);
    C.thuNho(heSoTN);
}
void cTAMGIAC:: quayGoc(float gocRad) {
    A.quayGoc(gocRad); B.quayGoc(gocRad); C.quayGoc(gocRad);
}