#ifndef OPTION_H_INCLUDED
#define OPTION_H_INCLUDED
#include<math.h>
class Option
{
    protected:
    double S0,T,K;
    double r;
    double sigma;


    public:

    Option(double a, double b, double c, double d, double e);
    virtual ~Option();
    double Phi(double x);






};


#endif // OPTION_H_INCLUDED
