#include "Monte_Carlo.h"

using namespace std;

Monte_Carlo::Monte_Carlo(double a, double b, double c, double d, double e,int f,int g): Option(a,b,c,d,e),N(f),nb_T(g)
{

}

Monte_Carlo::~Monte_Carlo()
{


}
double Monte_Carlo::approxS()
{
    double S(0);
vector <double> * Brown =new vector <double>(brownGenerator(N,T)) ;
for (int i=0;i<N;i++)
    {
        S=S+S0*exp((r-pow(sigma,2)/2)*(i+1)*T/N+sigma*(*Brown)[i]);
    }
    return S/N;
}
double Monte_Carlo::prixCall()
{
    double Call(0);
    for(int i=0;i<nb_T;i++)
    {
        Call=Call+sup(this->approxS()-K,0);
    }
    return ((exp(-r*T)/nb_T)*Call);
}

double Monte_Carlo::var()
{
    double call=this->prixCall();
    double s(0);
    for(int i=0; i<nb_T;i++)
    {
        s=s+pow(exp(-r*T)*sup(this->approxS()-K,0)-call,2);
    }
    return(s/(nb_T-1));

}



