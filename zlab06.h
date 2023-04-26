#ifndef ZLAB06_H
#define ZLAB06_H
#include<iostream>
#include <zlab03.h>

class Kwadrat: public Prostokat
{
public:

    Kwadrat(std::string nazwa = "?", double bok=0)
        :Prostokat(nazwa,bok,bok){}

    ~Kwadrat()
    {
        std::cout<<"Kwadat: "<<nazwa<<" konczy dzialanie"<<std::endl;
    }

    std::string doTekstu();
};

#endif // ZLAB06_H
