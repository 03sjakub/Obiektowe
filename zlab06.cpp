#include "zlab06.h"
#include "zlab03.h"

std::string Kwadrat::doTekstu()
{
    std::string napis="";
    napis="Kwadrat o nazwie: "+nazwa+" bok="+std::to_string(bok1);
    if(poprawny) napis+=" obwod="+std::to_string(obwod)+" pole=" + std::to_string(pole);
    else napis +=" !Figura niepoprawna.";
    return napis;
}
