#include <iostream>
using namespace std;

// Lớp môn học
class MonHoc
{
private:
    float diemMonHoc;
    string tenMonHoc;

public:
    int maMonHoc;

    // Hàm khởi tạo mặc định
    MonHoc()
    {
        maMonHoc = 0;
        tenMonHoc = "";
        diemMonHoc = 0.0f;
    }

    // Hàm khởi tạo có tham số
    MonHoc(int maMonHoc, string tenMonHoc, float diemMonHoc)
    {
        this->maMonHoc = maMonHoc;
        this->tenMonHoc = tenMonHoc;
        this->diemMonHoc = diemMonHoc;
    }

    // Hàm trả về mảng các thành phần
    int layMaMonHoc()
    {
        return maMonHoc;
    }
    string layTenMonHoc()
    {
        return tenMonHoc;
    }
    float layDiemMonHoc()
    {
        return diemMonHoc;
    }
};

// Lớp sinh viên
class SinhVien
{
private:
    MonHoc monHoc[6];

public:
    string maSinhVien;
    string tenSinhVien;

    // Hàm khởi tạo
    SinhVien(string maSinhVien, string tenSinhVien, MonHoc monHoc[6])
    {
        this->maSinhVien = maSinhVien;
        this->tenSinhVien = tenSinhVien;
        for (int i = 0; i < 6; i++)
        {
            this->monHoc[i] = MonHoc(monHoc[i].layMaMonHoc(), monHoc[i].layTenMonHoc(), monHoc[i].layDiemMonHoc());
        }
    }
};
