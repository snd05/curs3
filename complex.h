
#include <iostream>
using namespace std;

class complex {
    double re, im;
public:
    complex(double x=0, double y=0){
        set(x,y);
    }

    void set(double x, double y){
        this->re=x;
        this->im=y;
    }

    double getRe() const{
        return re;
    }

    void afisare() const{
        cout<<re<<" "<<im<<endl;
    }
};


