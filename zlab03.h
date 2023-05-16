#ifndef ZLAB03_H
#define ZLAB03_H
#include <string>
#include <iostream>

using namespace std;

class Prostokat{
    protected:
        string nazwa;
        double bok1,  bok2;
        bool   poprawny;
        double obwod, pole;

        bool czyPoprawny(double bok1, double bok2);
        void obliczObwod();
        void obliczPole();

    public:
        Prostokat(string n = "?", double a=1, double b=2);
        ~Prostokat();
        bool czyPoprawny();
        const string &jakaNazwa();
        double podajPole();
        double podajObwod();
        bool zmienBoki(double a, double b);

        std::string doTekstu();

        Prostokat & operaor++(int);
        bool operator!(){return czyPoprawny();}

};

std::ostream& operator<<(std::ostream & strumien, Prostokat & prostokat);
std::istream& operator>>(std::ostream & strumien, Prostokat & prostokat);
#endif //ZLAB03_H

//void drukujOrganizm(const Organizm & o){

//  cout << "Licznik Zycia: " << o.stanLicznikaZycia()
//       << " Licznik Posilków: " << o.stanLicznikaPosilkow() << endl
//       << "Limit posilków: " << o.limitPosilkow
//       << " Koszt potomka: " << o.kosztPotomka << endl
//       << "Głodny: " << o.glodny()
//       << " Pączukujący: " << o.paczkujacy() << endl << endl;
//}


//int main()
//{
//    //1. Test kreacji obiektów:
//Organizm organizm1(8,2,3);
//    Organizm organizm2 = organizm1;
//    Organizm organizm3(organizm1);

//    cout << "Wynik testu kreacji obiektow:\n\n";
//    cout << "Organizm1:" << endl;
//    drukujOrganizm(organizm1);

//    cout << "Organizm2" << endl;
//    drukujOrganizm(organizm2);

//    cout << "Organizm3" << endl;
//    drukujOrganizm(organizm3);

//    //2. Test niezaleznosci obiektow
//    organizm1.posilek();
//    organizm1.posilek();
//    organizm2.posilek();
//    organizm3.posilek();
//    organizm3.krokSymulacji();

//    cout << "Test niezaleznosci obiektow:\n\n";
//    cout << "Organizm1:" << endl;
//    drukujOrganizm(organizm1);

//    cout << "Organizm2" << endl;
//    drukujOrganizm(organizm2);

//    cout << "Organizm3" << endl;
//    drukujOrganizm(organizm3);

//    //3. Test symulacji
//    Organizm organizm4(8, 3, 2);

//    cout << "Wynik testu symulacji\n\n";
//    cout << "Stan początkowy:\n";
//    drukujOrganizm(organizm4);

//    for (int i = 1; i < 11; i++){
//        organizm4.krokSymulacji();

//        if (organizm4.paczkujacy()){
//          organizm4.potomek();
//          cout << "---> Potomek\n";
//        }
//        else organizm4.posilek();

//        cout << "Po wykonaniu kroku symulacji: " << i << endl;
//        drukujOrganizm(organizm4);
//      }

//    return 0;
//}
