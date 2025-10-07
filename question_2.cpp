#include <iostream>
using namespace std;

// Lớp môn học
class MonHoc
{
private:
    int maMonHoc;
    string tenMonHoc;

public:
    float diemMonHoc;
    // Hàm khởi tạo
    MonHoc(int maMonHoc, string tenMonHoc, float diemMonHoc)
    {
        this->maMonHoc = maMonHoc;
        this->tenMonHoc = tenMonHoc;
        this->diemMonHoc = diemMonHoc;
    }
};

// Lớp sinh viên
class SinhVien
{
private:
    int maMonHoc[10];

public:
    string maSinhVien;
    string tenSinhVien;

    // Hàm khởi tạo
    SinhVien(string maSinhVien, string tenSinhVien, int maMonHoc[10])
    {
        this->maSinhVien = maSinhVien;
        this->tenSinhVien = tenSinhVien;
        for (int i = 0; i < 10; i++)
        {
            this->maMonHoc[i] = maMonHoc[i];
        }
    }
};
