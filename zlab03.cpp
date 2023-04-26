//#include "zlab03.h"
//#include <iostream>
//#include <limits>
//#include <typeinfo>
//#include <cmath>
//#include <random>
//using namespace std;


//bool Prostokat::czyPoprawny(double bok1, double blok2)
//{
//    return bok1>0 && bok2>0;
//}

//void Prostokat::obliczObwod()
//{
//    obwod = 2*(bok1+bok2);
//}

//void Prostokat::obliczPole()
//{
//    pole = bok1*bok2;
//}
#include "zlab03.h"
#include <iostream>

Prostokat::~Prostokat(){
    std:: cout <<
        "Prostakat: " << nazwa   <<
        " znika."     << std::endl;
}

Prostokat::Prostokat(string n, double a, double b)
    :nazwa(n)
{
    poprawny = czyPoprawny(a,b);

    if (poprawny){
        bok1 = a;
        bok2 = b;
        obliczPole() ;
        obliczObwod();
    }
    else{
        bok1 = bok2 = pole = obwod = 0;
    }
}

bool Prostokat::czyPoprawny(double bok1, double bok2){
    return bok1 > 0 && bok2 > 0;
}

void Prostokat::obliczObwod(){
    obwod = 2 * (bok1 + bok2);
}

void Prostokat::obliczPole(){
    pole = bok1 * bok2;
}

bool Prostokat::czyPoprawny(){
    return poprawny;
}

const std::string &Prostokat::jakaNazwa(){
    return nazwa;
}

double Prostokat::podajPole(){
    return pole;
}

double Prostokat::podajObwod(){
    return obwod;
}
bool Prostokat::zmienBoki(double a, double b){
    if (czyPoprawny(a,b)){
        poprawny = true;
        bok1 = a;
        bok2 = b;
        obliczPole() ;
        obliczObwod();
        return true;
    }
    return false;
}

std::string Prostokat::doTekstu(){
    std:: string napis = "";
    napis = "Prostokat o nazwie: " + nazwa + "\n"
        + "bok1 = " + to_string(bok1) + "\n"
        + "bok2 = " + to_string(bok2) + "\n";

    if (poprawny) napis += "obdow = " + to_string(obwod)
                        + "\npole = " + to_string(pole);
    else napis += "Figura niepoprawna!";

    return napis;
}
