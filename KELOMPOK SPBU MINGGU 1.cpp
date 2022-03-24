#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
double sisa, total, bayar;
int a, b;
float liter;
char kembali, jawab;




do
{

cout<<endl;
cout<<" ************SPBU UAD************"<<endl;

cout<<"     1. Pertalite      :   Rp 7000.00"<<endl;
cout<<"     2. Pertamax     :   Rp 9000.00"<<endl;

lagi :
cout<<"\nMasukkan pilihan anda = ";
cin>>a;


switch(a)
{
    case 1:
            cout<<"\n     -----------\n       Pertalite\n     -----------"<<endl;
            cout<<"Berapa Liter = "; cin>>liter;
            cout<<endl;
            total=liter*4500;
            break;

    case 2:
            cout<<"\n     ------------\n       PERTAMAX\n     ------------"<<endl;
            cout<<"Berapa Liter = "; cin>>liter;
            cout<<endl;
            total=liter*9000;
            break;

    default :
            total=0;
            cout<<endl;
            cout<<"\nMasukkan angka 1 sampai 3 saja !"<<endl<<endl;
            cout<<"Lagi [Y/T] ? ";
            cin>>jawab;
            if (jawab == 'y' || jawab == 'Y')
                goto lagi;
            else if (jawab == 't' || jawab == 'T')
                goto tidak;
            break;
}
    cout<<"=================================="<<endl;
    cout<<"\nTotal Bayar         = Rp "<<total;
    by:
    cout<<"\nMasukkan Uang Bayar = Rp ";
    cin>>bayar;
    cout<<"\n=================================="<<endl;
    if (bayar >= total )
        {
         sisa=bayar-total;
         cout<<"Uang Kembali        = Rp "<<sisa;
        }
         else
        {
        cout<<"\nMaaf uang anda tidak mencukupi\n\n";
        goto by;
        }
cout<<"\n\nKembali ke menu lagi [Y/T] ? ";
cin>>kembali;

tidak :
cout<<"---------"<<"\n";

for (b=5; b<=5; b++)
{
    cout<<setw (b)<<"T"<<endl;
    cout<<setw (b)<<"E"<<endl;
    cout<<setw (b)<<"R"<<endl;
    cout<<setw (b)<<"I"<<endl;
    cout<<setw (b)<<"M"<<endl;
    cout<<setw (b)<<"A"<<endl;
    cout<<setw (b)<<" "<<endl;
    cout<<setw (b)<<"K"<<endl;
    cout<<setw (b)<<"A"<<endl;
    cout<<setw (b)<<"S"<<endl;
    cout<<setw (b)<<"I"<<endl;
    cout<<setw (b)<<"H"<<endl;
}
cout<<"---------"<<"\n";
}
while (kembali == 'y' || kembali == 'Y');
}
