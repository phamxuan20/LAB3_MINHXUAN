#include<iostream>
using namespace std;
int main()
{
  //khai báo biến n và yêu cầu người dùng nhập vào từ bàn phím
  //a là đơn vị
  int n;
  printf("\nNhập vào số n: ");
  scanf("%d", &n);
  int a = n % 10;
  //b là chục
  int b = (n / 10) % 10;
  //c là hàng trăm
  int c = n / 100;
  //điều kiện số có hai chữ số
  if(n<100 || n > 999){
    cout<<"Nhập vào số có hai chữ số!! ";
  }
  else{
    switch(c){
      case 1: cout<<"Một trăm ";break;
      case 2: cout<<"Hai trăm ";break;
      case 3: cout<<"Ba trăm ";break;
      case 4: cout<<"Bốn trăm ";break;
      case 5: cout<<"Năm trăm ";break;
      case 6: cout<<"Sáu trăm ";break;
      case 7: cout<<"Bảy trăm ";break;
      case 8: cout<<"Tám trăm ";break;
      case 9: cout<<"Chín trăm ";break;
    }
    // in ra chử "lẻ" nếu hàng chục bằng không
    if(b % 10 == 0 && a != 0){
      printf("lẻ ");
    }
    //in ra hàng chục
    switch(b){
      case 1: cout<<"mười ";break;
      case 2: cout<<"hai mươi ";break;
      case 3: cout<<"ba mươi ";break;
      case 4: cout<<"bốn mươi ";break;
      case 5: cout<<"năm mươi ";break;
      case 6: cout<<"sáu mươi ";break;
      case 7: cout<<"bảy mươi ";break;
      case 8: cout<<"tám mươi ";break;
      case 9: cout<<"chín mươi ";break;
    }
    //in ra hàn đơn vị
    switch(a){
      case 1: cout<<"một ";break;
      case 2: cout<<"hai ";break;
      case 3: cout<<"ba ";break;
      case 4: cout<<"bốn ";break;
      case 5: cout<<"lăm ";break;
      case 6: cout<<"sáu ";break;
      case 7: cout<<"bảy ";break;
      case 8: cout<<"tám ";break;
      case 9: cout<<"chín ";break;
    }
  }
 
}