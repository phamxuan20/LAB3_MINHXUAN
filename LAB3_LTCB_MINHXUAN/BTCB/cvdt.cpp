#include <iostream>
using namespace std;
/*Tạo hàm tính chu vi hình chữ nhật*/
void ChuViHCN(int a, int b){
  //khai báo biến P là chu vi hình chữ nhật
  int P;
  //tính chu vi sử dụng công tức dài cộng rộng nhân 2
  P = (a + b) * 2;
  //hiển thị chu vi ra màn hình
  cout<<"\nChu vi hình chữ nhật là: "<<P;
}
/*Tạo hàm tính diện tích hình chữ nhật*/
void DienTichHCN(int a, int b){
  //khai báo biến S là diện tích hình chữ nhật
  int S;
  //tính diện tích bằng công thức dài nhân rộng
  S = a * b;
  //hiển thị kết quả ra màn hình
  cout<<"\nDiện tích hình chữ nhật là: "<<S;
}
 
int main(){
  //khai báo hai biến a và b là chiều dài, chiều rộng
  int a, b;
  //yêu cầu người dùng nhập vào chiều rộng và chiều dài
  cout<<"Nhập chiều dài a: ";
  cin>>a;
  cout<<"Nhập chiều rộng b: ";
  cin>>b;
  //gọi hàm tính chu vi và diện tích đã viết
  ChuViHCN(a, b);
  DienTichHCN(a, b);
   
  cout<<"\n-------------------------------\n";
  
  return 0;
}