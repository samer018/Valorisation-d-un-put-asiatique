#include "Fonctions.h"

using namespace std;
vector <double> gaussGenerator(int N)
{

/**this function requires ctime and math.h and vector libraries**/
    vector<double> Gauss;
    double u,v,X,Y;

    for (int i=0; i<N/2+N%2; i++)
    {
        u=(double)rand()/RAND_MAX;
        v= (double)rand()/RAND_MAX;

        while(u==0||v==0)
        {
            u=(double)rand()/RAND_MAX;
            v= (double)rand()/RAND_MAX;
        }

        X=sqrt(-2*log(u))*cos(2*M_PI*v);
        Y=sqrt(-2*log(u))*sin(2*M_PI*v);
        Gauss.push_back(X);
        Gauss.push_back(Y);

    }

    if (Gauss.size()>N)
    {
        Gauss.pop_back();
    }
    return Gauss;
}
vector<double> brownGenerator(int N, double T)

{
    vector<double> * Gauss=new vector <double>(gaussGenerator(N));
    vector <double> W;
    double S(0);
    for(int i=0; i<N; i++)
    {
        S=S+(*Gauss)[i];
        W.push_back(sqrt(T/N)*S);
    }
    delete Gauss;

return(W);


}
double sup(double a, double b)
{double m;
    m=a;
    if(b>a){m=b;}
    return m;
}

