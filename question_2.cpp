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

int main()
{
    string maSinhVien;
    string tenSinhVien;
    // Nhập 1 sinh viên
    cout << "Nhập thông tin sinh viên\n";
    cout << "Nhập mã sinh viên: ";
    cin >> maSinhVien;
    cout << "Nhập tên sinh viên: ";
    cin >> tenSinhVien;
    cout << "\n";

    // Môn toán
    int diemToan;
    cout << "Nhập điểm môn Toán: ";
    cin >> diemToan;
    MonHoc toan = MonHoc(1, "Toán", diemToan);

    int diemLy;
    cout << "Nhập điểm môn Lý: ";
    cin >> diemLy;
    MonHoc ly = MonHoc(2, "Lý", diemLy);

    int diemHoa;
    cout << "Nhập điểm môn Hóa: ";
    cin >> diemHoa;
    MonHoc hoa = MonHoc(3, "Hóa", diemHoa);

    int diemVan;
    cout << "Nhập điểm môn Văn: ";
    cin >> diemVan;
    MonHoc van = MonHoc(4, "Văn", diemVan);

    int diemSu;
    cout << "Nhập điểm môn Sử: ";
    cin >> diemSu;
    MonHoc su = MonHoc(5, "Sử", diemSu);

    int diemDia;
    cout << "Nhập điểm môn Địa: ";
    cin >> diemDia;
    MonHoc dia = MonHoc(6, "Địa", diemDia);

    // Tạo sinh viên
    MonHoc monHoc[6] = {toan, ly, hoa, van, su, dia};
    SinhVien sv = SinhVien(maSinhVien, tenSinhVien, monHoc);

    // In ra sinh viên
    cout << "\n\n"
         << "Thông tin sinh viên\n"
         << "Mã sinh viên: " << maSinhVien << "\n"
         << "Tên sinh viên: " << tenSinhVien << "\n"
         << "\n"
         << "Điểm môn Toán: " << toan.layDiemMonHoc() << "\n"
         << "Điểm môn Lý: " << ly.layDiemMonHoc() << "\n"
         << "Điểm môn Hóa: " << hoa.layDiemMonHoc() << "\n"
         << "Điểm môn Văn: " << van.layDiemMonHoc() << "\n"
         << "Điểm môn Sử: " << su.layDiemMonHoc() << "\n"
         << "Điểm môn Địa: " << dia.layDiemMonHoc() << "\n"
         << "\n";
}