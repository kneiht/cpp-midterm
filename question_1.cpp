# include <iostream>

using namespace std;

int main()
{
    // Khai báo n và m
    int n, m;
    
    // Nhập n
    cout << "Nhập số lượng phần tử trong mảng: ";
    cin >> n;
    
    // Nhập mảng
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhập phần tử số " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Nhập m, không biết dùng từ tiếng việt mô tả số m này như nào luôn thầy
    cout << "Nhập thứ tự số lớn nhất: ";
    cin >> m;

    // Sắp xếp mảng
    for (int i = 0; i < n; i++)
    {
      int minIndex = i;
      for (int j = i + 1; j < n; j++)
      {
        if (arr[j] < arr[minIndex])
        {
          minIndex = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }

    // In ra mảng để kiểm tra
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }

    // Số lớn thứ m
    cout << "\nSố lớn thứ " << m << " là " << arr[m - 1];
  }

