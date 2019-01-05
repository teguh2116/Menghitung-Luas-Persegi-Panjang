#include <iostream>
using namespace std;
int main ()
{
    int p,l,luas;
    cout<< "<==== Menghitung Luas Persegi Panjang =====>\n";
    cout<< "Input Panjang :";
    cin>>p;
    cout<< "Input Lebar :";
    cin>>l;
    luas=p*l;
    cout<< "Luas Persegi Panjang :"<<luas;
    char LG;
cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
    return 0;
}
