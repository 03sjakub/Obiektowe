#include <iostream>
#include "organizm.h"
#include "sasiedztwo.h"
#include "generatorlosowy.h"
#include <string>
#include <cstring>
#include "nisza.h"
#include "osobniki.h"
#include "zlab10.h"
#include "zlab03.h"
#include "zlab06.h"
#include "zlab09.h"
using namespace std;

int maint()
{
    //Listing 10.6
    /*Prostokat p("Prostokat",2,3);
    Kwadrat k("Kwadrat",4);
    cout<<p<<endl;
    cout<<k<<endl;*/

    //Listing 10.7
    /*Prostokat p("Prostokat",2,3);
    cout<<p<<endl;
    cin>>p;
    cout<<p<<endl;*/

    //Listing 10.10
    /*Prostokat p("Prostokat",2,3);
    cout<<p<<endl;
    p++;
    cout<<p<<endl;*/

    //Listing 10.11
    /*Prostokat p0("Prostokat",2,3);
    cout<<"!p0="<<!p0<<endl;
    Prostokat p1("Prostokat",0,0);
    cout<<"!p1="<<!p1<<endl;*/

    return 0;
}


/*
int main()
{
    Nisza nisza;
    nisza.przyjmijLokatora(new Bakteria());

    cout<<"Kto w niszy: "<< nisza.ktoTuMieszka()<<endl;
    cout<<"Czy żywy: "<< nisza.lokatorZywy()<<endl;

    Sasiedztwo sasiedztwo;
    sasiedztwo.okreslSasiada(P,GLON);
    sasiedztwo.okreslSasiada(PG,GRZYB);
    sasiedztwo.okreslSasiada(G,GRZYB);
    sasiedztwo.okreslSasiada(LG,GLON);
    sasiedztwo.okreslSasiada(L,BAKTERIA);
    sasiedztwo.okreslSasiada(LD,BAKTERIA);
    sasiedztwo.okreslSasiada(D,GLON);
    sasiedztwo.okreslSasiada(PD,PUSTKA);

    ZamiarMieszkanca zamiar = nisza.aktywujLokatora(sasiedztwo);

    cout<<"Akcja: " << zamiar.akcja<<" gdzie: "<< zamiar.gdzie <<endl;

    return 0;
}
*/

/*static Nisza n1,n2,n3;

static char sep = UstawieniaSymulacji::pobierzUstawienia().znakSeparator;

void wyswietlNisze()
{
    cout<<n1.jakiSymbol()<<sep
       <<n2.jakiSymbol()<<sep
      <<n3.jakiSymbol()<<endl;
}

int main()
{
    cout<<"Puste nisze: ";
    wyswietlNisze();

    cout<<"Lokowanie mieszkańców: ";
    n1.przyjmijLokatora(new Glon());
    n3.przyjmijLokatora(new Grzyb());

    wyswietlNisze();

    cout<<"Przesuwanie lokatorów: ";
    n2=n1;
    wyswietlNisze();

    cout<<endl;
    return 0;
}
*/
//string nazwaRodzaju(RodzajMieszkanca rodzaj){
//    switch (rodzaj) {
//        case GLON: return "GLON";
//        case GRZYB: return "GRZYB";
//        case BAKTERIA: return "BAKTERIA";
//        case PUSTKA: return "PUSTKA";
//        case SCIANA: return "ŚCIANA";
//        case TRUP: return "TRUP";
//        case NIEZNANE: return "NIEZNANE";
//    }
//}

//int main()
//{
//    Sasiedztwo sasiedztwo;

//    sasiedztwo.okreslSasiada(P,GLON);
//    sasiedztwo.okreslSasiada(PG,GRZYB);
//    sasiedztwo.okreslSasiada(G,GRZYB);
//    sasiedztwo.okreslSasiada(LG,GLON);
//    sasiedztwo.okreslSasiada(L,BAKTERIA);
//    sasiedztwo.okreslSasiada(LD,BAKTERIA);
//    sasiedztwo.okreslSasiada(D,GLON);
//    sasiedztwo.okreslSasiada(PD,PUSTKA);

//    cout <<"Przeglad sasiedztwa:"<<endl;

//    for (int i=0; i<8; i++){
//        Polozenie p = static_cast<Polozenie>(i);

//        RodzajMieszkanca
//            r = sasiedztwo.ktoJestSasiadem(p);

//        cout<< "polozenie=" << p << " rodzaj="
//        << nazwaRodzaju(r) << endl;
//    }

//    cout << endl<< "Policzenie sasiadow"
//    << "okreslonego rodzaju:"<< endl
//    << " glony="  << sasiedztwo.ile(GLON)  << endl
//    << " grzyby=" << sasiedztwo.ile(GRZYB) << endl
//    << " trupy="  << sasiedztwo.ile(TRUP)  << endl;

//    cout << endl
//    << "Wylosowanie sasiada:"   << endl
//    << " glon -> "
//    << sasiedztwo.losujSasiada(GLON)   << endl
//    << " pustka -> "
//    << sasiedztwo.losujSasiada(PUSTKA) << endl
//    << " trup -> "
//    << sasiedztwo.losujSasiada(TRUP)   << endl;

//    long wiersz, kolumna;

//    cout << endl
//    << "Zmiana indeksow [5][7]"
//    << "wg pokozenia: " << endl;

//    for (int i=0; i<8; i++){
//        Polozenie p = static_cast<Polozenie>(i);
//        wiersz = 5; kolumna = 7;

//        Sasiedztwo::
//            zmienIndeksyWgPolozenia(p, wiersz, kolumna);

//        cout
//        << "polozenie: " << p
//        << " -> [" << wiersz
//        << "][" << kolumna << "]"
//        << endl;
//    }

//    cout << endl;
//    return 0;
//}
