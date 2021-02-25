#ifndef MONTE_CARLO_H_INCLUDED
#define MONTE_CARLO_H_INCLUDED

#include "Option.h"
#include "Fonctions.h"
#include "vector"


class Monte_Carlo : public Option
{
private:
int N;
int nb_T;
    public:
    Monte_Carlo(double a, double b, double c, double d, double e,int f,int g);
    virtual ~Monte_Carlo();
    double approxS();
    double prixCall();
    double var();

};


#endif // MONTE_CARLO_H_INCLUDED
