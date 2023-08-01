// Main.cpp
#include <iostream>
using namespace std;

int main()
{
	int nDay, nMonth, nYear;
	cout << "Day: ";
	cin >> nDay;

	cout << "Month: ";
	cin >> nMonth;

	cout << "Year: ";
	cin >> nYear;

	if (laNgayHopLe(nDay, nMonth, nYear))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}

// Hàm kiểm tra năm nhuận
bool laNamNhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		return true;
	}
	return false;

	// <=> return ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0);
}

// Hàm trả về số ngày trong tháng thuộc năm cho trước
int tinhSoNgayTrongThang(int nMonth, int nYear)
{
	int nNumOfDays;

	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: 
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: 
		nNumOfDays = 30;
		break;
	case 2:
		if (laNamNhuan(nYear))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	}

	return nNumOfDays;
}

// Hàm kiểm tra ngày dd/mm/yyyy cho trước có phải là ngày hợp lệ
bool laNgayHopLe(int nDay, int nMonth, int nYear)
{
	// Kiểm tra năm
	if (nYear < 0)
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	// Kiểm tra tháng
	if (nMonth < 1 || nMonth > 12)
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	// Kiểm tra ngày
	if (nDay < 1 || nDay > tinhSoNgayTrongThang(nMonth, nYear))
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	return true; // Trả về trạng thái cuối cùng...
}
