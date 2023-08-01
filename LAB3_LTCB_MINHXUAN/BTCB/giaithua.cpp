#include<iostream>
using namespace std;

int main()
{
     // Khai bao bien
     int n, fact = 1;

     // Nhap gia tri dau vao
     cout<<"Nhap mot so :";
     cin>>n;

     //Vong lap for
     for (int x = 1; x <= n; x++)
     {
         fact = fact * x;
     }

     cout << fact;
     
     return 0;
 }