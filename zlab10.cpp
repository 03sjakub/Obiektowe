#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include "zlab10.h"
#include "ustawienia.h"

void ZLab10::wektor()
{
    std::vector<double> wektor;

    wektor.push_back(2.3);
    wektor.push_back(4.5);
    wektor.push_back(-2.3);
    wektor.push_back(0.1);

    std::cout<<"Rozmiar wektora: " << wektor.size()<<std::endl;
    for(double d : wektor) std::cout<<d<<" ";
    std::cout<<std::endl<<std::endl;

    //Próba zapisu poza granicą
    for(unsigned long i=5;i<10;i++) wektor[i]=3.2;
    std::cout<<"Rozmiar wektora: "<<wektor.size()<<std::endl;
    for(double d: wektor ) std::cout<<d<<" ";
    std::cout<<std::endl<<std::endl;

    //Zwiększenie rozmiaru
    wektor.resize(12);
    for(unsigned long i=5;i<10;i++) wektor[i]=3.2;
    std::cout<<"Rozmiar wektora: "<<wektor.size()<<std::endl;
    for(double d: wektor ) std::cout<<d<<" ";
    std::cout<<std::endl<<std::endl;

    //Zapis przy użyciu zwykłej pętli
    for(unsigned long i=0;i<wektor.size();i++)
        wektor[i]=i;
    std::cout<<"Rozmiar wektora: "<<wektor.size()<<std::endl;
    for(double d: wektor ) std::cout<<d<<" ";
    std::cout<<std::endl<<std::endl;

    //Zapis przy użyciu pętli zakresowej
    for(double & d: wektor) d=3.14;

    for(double d : wektor) std::cout<<d<<" ";
    std::cout<<std::endl<<std::endl;

    //Czyszczenie
    wektor.clear();
    std::cout<<"Rozmiar wektora: "<<wektor.size()<<std::endl;
    for(double d: wektor ) std::cout<<d<<" ";
    std::cout<<std::endl<<std::endl;
}

void ZLab10::wektor_sortowanie()
{
    std::vector<int> wektor;

    wektor.resize(13);

    for(int& j: wektor) j= GEN::losujOdZeraDo(20);

    std::cout<<"Wektor wygenerowany"<<std::endl;
    for(auto j : wektor) std::cout<<j<<" ";
    std::cout<<std::endl<<std::endl;

    std::cout<<"Wektor posortowany"<<std::endl;
    sort(wektor.begin(), wektor.end());
    for(auto j: wektor) std::cout<< j<< " ";
    std::cout<<std::endl<<std::endl;

    std::cout<<"Wekor pomieszany"<<std::endl;
    random_shuffle(wektor.begin(), wektor.end(), GEN::losujOdZeraDo);

    for(auto j: wektor) std::cout<< j<< " ";
    std::cout<<std::endl<<std::endl;

}

void ZLab10::zbior()
{
    std::set<std::string> imiona;
    imiona.insert("Adam");
    imiona.insert("Ewa");
    imiona.insert("Maciek");

    for(std::string s: imiona) std::cout<<s<<" ";
    std::cout<<std::endl<<std::endl;

    imiona.insert("Adam");
    imiona.insert("Iwona");
    imiona.insert("Ewa");
    imiona.insert("Beata");
    imiona.insert("Maciek");

    for(std::string s: imiona) std::cout<<s<<" ";
    std::cout<<std::endl<<std::endl;

    std::set<std::string>::iterator iter=imiona.begin();
    while(iter != imiona.end())
    {
        std::cout<< *iter << std::endl;
        iter++;
    }
}

void ZLab10::mapa()
{
    std::map<char,double> pomiary;

    pomiary.insert(std::pair<char,double>('A',20));
    pomiary.insert(std::pair<char,double>('B',30));
    pomiary.insert(std::pair<char,double>('C',50));
    pomiary.insert(std::pair<char,double>('D',25));
    pomiary.insert(std::pair<char,double>('A',20));
    pomiary.insert(std::pair<char,double>('A',40));

    std::cout<<"Wyswietlenie mapy"<<std::endl;
    for(char c: {'A','B','C'})
        std::cout<<c<<"->"<<pomiary[c]<<std::endl;

    std::cout<<"Policz A -> "<<pomiary.count('A')<<std::endl;
    pomiary.erase('A');
    std::cout<<"Wyswietlenie mapy"<<std::endl;
    for(char c: {'A','B','C'})
        std::cout<<c<<"->"<<pomiary[c]<<std::endl;
    std::cout<<"Policz A -> "<<pomiary.count('A')<<std::endl;
}

