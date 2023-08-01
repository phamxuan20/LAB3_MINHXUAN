#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t, t500, t200, t100, t50, t20, t10;
    
    cout<<"Nhap so tien ma ban muon doi: ";
    cin>>t;
    
    t500=t/500000;
    t=t-500000*t500;
    t200=t/200000;
    t=t-200000*t200;
    t100=t/100000;
    t=t-100000*t100;
    t50=t/50000;
    t=t-50000*t50;
    t20=t/20000;
    t=t-20000*t20;
    t10=t/10000;
  
    cout<<("So to cac loai menh gia ma ban se nhan:")<<endl;
    cout<<"Menh gia 500.000: "<<t500<<endl;
    cout<<"Menh gia 200.000: "<<t200<<endl;
    cout<<"Menh gia 100.000: "<<t100<<endl;
    cout<<"Menh gia 50.000: "<<t50<<endl;
    cout<<"Menh gia 20.000: "<<t20<<endl;
    cout<<"Menh gia 10.000: "<<t10<<endl;    
    cout<<"Tong so to tien ban se nhan: "<<t10+t20+t50+t100+t200+t500;
}
