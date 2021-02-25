#include <iostream>
#include "Option.h"
#include "TW.h"
#include "TWDiscret.h"
#include "Fonctions.h"
#include "Monte_Carlo.h"


using namespace std;


int main()
{
    srand(static_cast <unsigned> (time(0)));



    Monte_Carlo a(1.0,0.5,1.0,0.01,0.3,126,100000);
    double s(a.prixCall());
    TWDiscret b(1.0,0.5,1.0,0.01,0.3,126);
    double z(b.rA());
    double y(b.sigmaA());
    double t(b.prixCall());


    cout << z<<endl<<y<<endl<<s<<endl<<t;




    return 0;
}



