#include <iostream>
using namespace std;

class Distance {
    double meter;
public :
    Distance (){
        meter = 0 ;
    } 
    friend double addOneMeter(Distance &d);
    friend double addOneCentimeter(Distance &d);
};

double addOneMeter (Distance &d) { 
    d.meter += 1;
    return d.meter;
}

double addOneCentimeter (Distance &d) { 
    d.meter += 0.01;
    return d.meter;
}

int main ()
{
    Distance d;
    cout << addOneMeter (d) << endl;
    cout << addOneCentimeter (d) << endl;
    cout << addOneMeter (d) << endl;
    cout << addOneCentimeter (d) << endl;
    return 0 ;
}
