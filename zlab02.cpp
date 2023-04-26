#include "zlab02.h"
#include <iostream>
#include <limits>
#include <typeinfo>
#include <cmath>
#include <random>


Zlab02::Zlab02()
{

}

void Zlab02::zadanie_2_3()
{
    int a = -3;
    unsigned int b;
    b = 5;

    int int_min = std::numeric_limits<int>::min();
    int int_max = std::numeric_limits<int>::max();

    unsigned int unsigned_int_min = std::numeric_limits<unsigned int>::min();
    unsigned int unsigned_int_max = std::numeric_limits<unsigned int>::max();

    long int_zakres = static_cast<long>(int_max) - static_cast<long>(int_min);

    long unsigned_int_zakres = static_cast<long>(unsigned_int_max) - static_cast<long>(unsigned_int_min);

    std::cout << "Zmienna c1 jest typu: " << typeid (a).name() << " ma rozmiar: " << sizeof (a) << " bajtow" << std::endl
         << "Zakres tej zmiennej to: " << int_min <<    " -> " << int_max << ", to oznacza " << int_zakres
         << " roznych wartosci"<< std::endl << "Aktualna wartosc zmiennej to: " << a << std::endl << std::endl;
    std::cout << "Zmienna c2 jest typu: " << typeid (b).name() << " ma rozmiar: " << sizeof (b) << " bajtow" << std::endl
             << "Zakres tej zmiennej to: " << unsigned_int_min <<    " -> " << unsigned_int_max << ", to oznacza " << unsigned_int_zakres
             << " roznych wartosci"<< std::endl << "Aktualna wartosc zmiennej to: " << b << std::endl << std::endl;
}

void Zlab02::zadanie_2_4()
{
    int a=5, b=3;
    int c=a/b;
    double d = a/b;
    double e = static_cast<double>(a)/static_cast<double>(b);

    std::cout << "a=" << a << " b=" << b << std::endl
         << " a/b=" << c << std::endl
         << " a/b=" << d << std::endl
         << " a/b=" << e << std::endl;
}

void Zlab02::zadanie_2_5()
{
    std::cout.precision(20);
    double eps = std::numeric_limits<double>::min();
    std::cout << "Dzielenie z dokladnoscia: " << eps << std::endl;
    double x,y;
    std::cout << "Podaj dzielna: ";
    std::cin >> x;
    std::cout << "Podaj dzielnik: ";
    std::cin >> y;
    if (fabs(y)>eps)
         std::cout << x << "/" << y << "=" << x/y << std::endl;
    else
        std::cout << "Dzielnik jest za maly" << std::endl;
}

void Zlab02::menu()
{
    unsigned short wybor;
    do
        {
            std::cout << "KtÛre zadanie uruchomiÊ?" << std::endl
                 <<"3 -> zadanie 2.3" << std::endl
                 <<"4 -> zadanie 2.4" << std::endl
                 <<"5 -> zadanie 2.5" << std::endl
                 <<"6 -> zadanie pobierzLiczbe" << std::endl
                 <<"7 -> zadanie 2.7" << std::endl
                 <<"8 -> zadanie 2.8" << std::endl
                 <<"9 -> zadanie 2.9" << std::endl
                 <<"10 -> zadanie 2.10" << std::endl;

            std::cin>>wybor;

        }while(wybor < 3 || wybor > 10);

    switch(wybor)
    {
        case 3 : zadanie_2_3(); break;
        case 4 : zadanie_2_4(); break;
        case 5 : zadanie_2_5(); break;
        case 6 : pobierzLiczbe(); break;
        case 7 : zadanie_2_7(); break;
        case 8 : zadanie_2_8(); break;
        case 9 : zadanie_2_9(); break;
        case 10 : zadanie_2_10(5,100); break;
        default: std::cout << "Nie ma takiego zadania" << std::endl;
    }
}

void Zlab02::zadanie_2_7()
{
   long liczba1=3,liczba2=-5,liczba3=0;
   long *wskaznikDoLong;
   wskaznikDoLong=nullptr;
   std::cout<<"liczba1="<<liczba1<<"liczba2="<<liczba2<<"liczba3="<<liczba3<<std::endl;
   wskaznikDoLong=&liczba2;
   *wskaznikDoLong=10;
   std::cout<<"liczba1="<<liczba1<<"liczba2="<<liczba2<<"liczba3="<<liczba3<<std::endl;
   wskaznikDoLong=&liczba3;
   *wskaznikDoLong=liczba1;
   std::cout<<"liczba1="<<liczba1<<"liczba2="<<liczba2<<"liczba3="<<liczba3<<std::endl;
   wskaznikDoLong=&liczba1;
   liczba2=*wskaznikDoLong;
   std::cout<<"liczba1="<<liczba1<<"liczba2="<<liczba2<<"liczba3="<<liczba3<<std::endl;
}

void Zlab02::zadanie_2_8()
{
   long liczba1=3, liczba2=-5 ,liczba3=0;

   std::cout << "liczba1=" << liczba1;
   std::cout << "liczba2=" << liczba2;
   std::cout << "liczba3=" << liczba3 << std::endl;

   long & referencjaDoLong = liczba2;

   referencjaDoLong=10;

   std::cout << "liczba1=" << liczba1;
   std::cout << "liczba2=" << liczba2;
   std::cout << "liczba3=" << liczba3 << std::endl;

   long & referencjaDoLongInna = liczba3;

   referencjaDoLongInna=liczba1;

   std::cout << "liczba1=" << liczba1;
   std::cout << "liczba2=" << liczba2;
   std::cout << "liczba3=" << liczba3 << std::endl;

   long & referencjaDoLongKolejna = liczba1;

   liczba2 = referencjaDoLongKolejna;

   std::cout << "liczba1=" << liczba1;
   std::cout << "liczba2=" << liczba2;
   std::cout << "liczba3=" << liczba3 << std::endl;
}

void Zlab02::zadanie_2_9()
{
    const short N=10;
    int tablica[N];
    std::random_device maszynkaLosujaca;
    std::uniform_int_distribution<short> dystrybucja(-3,4);
    for (unsigned short i=0; i<N; i++)
        tablica [i] = dystrybucja(maszynkaLosujaca);
    for (int j : tablica) std::cout << j << " ";
    std::cout << std::endl;
}

void Zlab02::zadanie_2_10(short min, short max)
{

    const short N=10;
    int tab[N];

    std::random_device maszynka;
    std::uniform_int_distribution<short> dystr(min,max);

    tab[0]=dystr(maszynka);

    for (unsigned short i=1;i<N;i++)
        while ((tab[i]=dystr(maszynka)) <tab[i-1]);

    for (int liczba: tab) std::cout <<liczba<<" ";
}

double Zlab02::pobierzLiczbe()
{
    double x=0;
    bool sukces = true;
    std::string linja;

    do{
        if(!sukces) std::cout << "!To ma byÊ liczba."<< std::endl;
        getline(std::cin, linja);
        try{
            x=stod(linja);
            sukces=true;
        } catch (const std::invalid_argument&){
            sukces=false;
        }
    }while(!sukces);
    return x;
}
