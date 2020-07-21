#include <iostream>

using namespace std;

int main(){

    int secim;
    cout<<"Secimini Yap"<<endl;
    cin>>secim;

    switch(secim){
    case 1:
        cout<<"Birinci Secim";
        break;
    case 2:
        cout<<"Ikinci secim";
        break;
    default:
        cout<<"Bir Secim Yapiniz";

    }
    return 0;
}
