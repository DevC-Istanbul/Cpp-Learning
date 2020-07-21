#include <iostream>

using namespace std;

void diziElemanlariYazdir(int sayiDizisi[],int boyut){
    for(int i=0;i<boyut;i++){
        cout<<sayiDizisi[i]<<" ";
    }

}

int toplama(int sayi1, int sayi2){

    return sayi1+sayi2;
}



int main()
{
    int sayilar[3] = {2,4,6};

    diziElemanlariYazdir(sayilar,3);

    int x=5;
    int y=6;
    int asd;

    asd = toplama(x,y);
    cout<<asd;

    return 0;
}
