#include <iostream>

using namespace std;

int main()
{
    int sayi=10;

    int *sayininAdresi = &sayi;

    cout << sayininAdresi << endl;
    cout << *sayininAdresi << endl;

    string takim[] = {"gs","fb","bjk"};

    string *takimAdres = takim;

    cout << takim << endl;
    cout << *takimAdres << endl;

    return 0;
}
