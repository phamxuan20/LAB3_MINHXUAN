#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = s.length();
    if(s[0] == '0'){
        cout << "\nSo ban nhap khong hop le!";
        return 0;
    }
    for(int i = 0; i < l; i++){
        if(s[i] > '9' || s[i] < '0'){
            cout << "\nSo ban nhap khong hop le!";
            return 0;
        }
    }
    
    while(s[l-1] == '0') --l;
    
    for(int i = l-1; i >= 0; --i){
        cout << s[i];
    }
}