#include"Option.h"
  Option::Option(double a, double b, double c, double d, double e): S0(a), T(b), K(c), r(d), sigma(e)
 {

 }

Option::~Option()
{
}
double Option::Phi(double x)
{
    double b0(0.2316419),b1(0.319381530),b2(-0.356563782),b3(1.781477937),b4(-1.821255978),b5(1.330274429);
    if(x>0)
    {

    double t(1/(1+b0*x));

    return (1-(1/sqrt(2*M_PI))*exp(-pow(x,2)/2)*(b1*t+b2*pow(t,2)+b3*pow(t,3)+b4*pow(t,4)+b5*pow(t,5)));
    }
    else
    {
        double t(1/(1-b0*x));
        return ((1/sqrt(2*M_PI))*exp(-pow(x,2)/2)*(b1*t+b2*pow(t,2)+b3*pow(t,3)+b4*pow(t,4)+b5*pow(t,5)));

    }

}
